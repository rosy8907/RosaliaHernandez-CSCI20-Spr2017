// Rosalia Hernandez
// 25 April 2017
// This program generates three usernames using the first and last name of the user using the string library


#include <iostream>
#include <string>                                                               // let's us use the string library which is much easier than using cstrings
using namespace std;

int main (){
    string firstName = " ";                                                     // set the first and last name to the same thing so that it will enter the while loop
    string lastName = " ";
    
    while ( firstName == lastName ) {                                           // this while loop checks if the first and last name are the same, and keep the user in this loop if they input the same first and last name
   
        cout << "Enter first name:" << endl;
        cin >> firstName;
        
        while ( firstName.length() > 10) {                                      // the first name must be less than 10 characters, this while loop keeps the user in it until the first name is less than 10 characters
            cout << "Oops, too long, try again." << endl;
            cin >> firstName;
        }
        
        cout << "Enter last name:" << endl;                 
        cin >> lastName;
        
        while ( lastName.length() > 20) {                                       // this while loop keeps the user in it until the last name is less than 20 characters long
            cout << "Oops, too long, try again." << endl;
            cin >> lastName;
        }
        
        if ( firstName == lastName ) {                                          // if the first and last name are the same, this message is displayed and the first while loop executes again
            cout << "Oh no, you're first and last name are the same!" << endl;  // if the first and last name are not the same, the user exits this while loop
            cout << "Please enter different first and last names." << endl;
        }
     
        
    cout << endl << "Username options:" << endl;
    cout << firstName + lastName << endl;                                       // the next three lines generate 3 different user name options using the reference guide in the c++ string library and the zybooks reading from chapter 21
    cout << firstName.at(0) + lastName << firstName.length() << endl;
    cout << firstName.at(0) << firstName.at(1) << lastName;
    }
 
    
    
    
}