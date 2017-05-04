//Rosalia Hernandez
// 4 May 2017
// The purpose of this lab is to identify what each lab is doing.
// The purpose of the program is to determine if the word entered by the user is a palindrome.
// This program was not made by me.


#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;                                         //sets nameLength to value 0                                 
    char *name = new char;                                      //pointers cant be arrays, this sets a new pointer 

    cout << "Please enter a 10 letter word or less" << endl;    //displays output that asks user for input
    cin >> name;                                                //user enters characters that will go into where the name pointer is pointing

    char * head  = name;                                        //directs head to the same place name is pointing to
    char * tail = name;                                         // directs tail to the same place name is pointing to
    char firststr;                                              //declares firststr, this is where name is pointing to
    nameLength = strlen(name);                                  //gives nameLength a new value, however long the word entered is in length is the new value
    
    cout << "Your word is " << firststr << endl;                //outputs what the user entered in name, which redirected it to firststr and outputs that word
    head = name;  
    if (nameLength<10)                                          //if the user-entered word is less than 10
    {
         while (*head != '\0')                                  
         {
                cout << *head;                                  //it will display the information that head is pointing to which is name, which is firststr
                head++;
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;//if the user-entered word is more than 10 it will display this warning
     }

     cout << endl;                                              //adds a new line

     tail = &name[strlen(name) - 1 ];                            //tail is assigned the location of the second to last letter

     if (nameLength < 10)                                       
     {
          while (tail != name)                                  //compares tail to name, and while its not equal it
          {
                 cout << *tail;                                 //displays the values in tail going backwards
                 tail--;
          }
     }
     cout << endl;
     head = name; 
                                                  //saves the character array in name to head
     tail = &name[strlen(name) - 1 ];                            

     head++;                                                    //increases head by 1
     tail--;                                                    //decreases tail by 1

     if (*head == *tail)                                        //compares the saved data in head and saved data in tail, if its the same then its a palindrome
     {
         cout << "It is an palindrome!" << endl;
     }
     else                                                       //if its not then its not a palindrome
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}