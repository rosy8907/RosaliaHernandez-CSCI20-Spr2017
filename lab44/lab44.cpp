// Rosalia Hernandez
// 20 April 2017
// This program generates three usernames based on the user's first and last name using only the cstring library

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    char firstName[10] = " ";                                                   //the first and last name can be different lengths so i made them into two different arrays
    char lastName[20] = " ";
    
    
    
    
while (strcmp(firstName, lastName) == 0) {                                      //if the first and last name are the same, the user will be stuck in the while loop
           
    cout << "Enter First Name:" << endl;
    cin >> firstName;
     
    
    while (strlen(firstName) > 10) {                                            //this while loops keeps the user in the first name loop until the first name is less than 10 characters
        cout << "Too long, try again." << endl;
        cin >> firstName;
    }
    
    cout << "Enter Last Name:" << endl;
    cin >> lastName;
    
    while (strlen(lastName) > 20) {                                             //while loops keeps the user in the last name loop until the last name is less than 20 characters
        cout << "Too long, try again" << endl;
        cin >> lastName;
    }    
    
    if (strcmp(firstName, lastName) == 0) {                                     //if the user reaches the end of the loop and the first and last name are the same, it will display this message to try again
        cout << "Oh No, your first name and last name match." << endl;
        cout << "Please try again." << endl;
    }
}
 
 cout << endl;

 string userName1 = strcat(firstName, lastName);                                //c string library functions to manipulate the strings to determine 3 different user names
 string userName2 = strncat(lastName, firstName, 3);
 string userName3 = strncpy(firstName, lastName, 1);
 
 cout << "Which of these three user names would you like? " << endl;
 
 cout << userName1<< endl;                                                      //outputs the three different usernames that were stored in username variables
 cout << userName2 << endl;
 cout << userName3 << endl;

    

}