//Rosalia Hernandez
// 4 May 2017
// The purpose of this lab is to identify what each line is doing.
// The purpose of the program is to determine if the word entered by the user is a palindrome.
// This program was not made by me.

#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;  // sets "nameLength" to 10
    char * name = new char[10];     // the pointer "name" points to a memory location for a new character array
    

    cout << "Please enter a 10 letter word or less" << endl; //output to screen
    cin >> name; //input from user

    char * head  = name;     // declares char pointer "head" to point to location where array name is stored
    char * tail = name;     // declares char pointer "tail" to point to location where array name is stored
    nameLength = strlen(name); //sets namelength to the length of name, which was input by the user
    
    char *firststr = name; //declares pointer "firststr" to point to variable name. 
    //variable firststr was not defined at first, but I assume it is supposed to output the name the user had input
    cout << "Your word is " << firststr << endl; // assumption comes from this line, its supposed to output the word the user had input.
    //at this point name, head, tail and firststr hold the same information, the user-input name


    if (nameLength<10)
    {
         while (*head != '\0')  //while the pointer is not pointing to the last element...
         {
                cout << *head; //outputs the element in name array which head is pointing to
                head++; //increments the pointer head by one, to go to the next element
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; //the word has to be 10 letters or less, will not work if its more, this message will output
     }
     
     cout << endl;
     
     

     tail = &name[strlen(name) - 1 ]; //stores the location to the last letter in "name" to tail (second highest index). its minus one because we dont want the /0

  
     if (nameLength < 10)
     {
          while (tail != name) 
          {
                 cout << *tail; //outputs element in array which tail is pointing to
                 
                 tail--; //decreases tail by one
          }
     }
     cout << endl;

     head = name; //head points to location of name(start from the beginning)

     tail = &name[strlen(name) - 1]; //tail is assigned to the second to last address of name (start from the end)
      

     head++; //incrememnts head
     tail--; //decreases tail
   

     if (*head == *tail) //if head an tail are the same at every element then it's a palindrome
     {
         cout << "It is an palindrome!" << endl; 
     }
     else //if they are not the same at every element then it is not a palindrome
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}