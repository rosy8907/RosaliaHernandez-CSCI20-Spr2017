//Rosalia Hernandez
//10 April 2017
//This program will generate a random number between 1 and 50 and let the user guess what number
//it is by giving the user clues.

#include <iostream>
#include <ctime>
using namespace std;

int randomNumber () {                                                           //function generates a random number between 1 and 50
    int number;
    srand(time(0));       
   number = ( rand() % 50 ) + 1 ; 
}

int main (){
    int computerGuess = 0;                                                      
    int userGuess = 0;
    int isTrue = 1;
    
    computerGuess = randomNumber();                                             //computer choses a random number between 1 and 50

cout << "Guess the number chosen between 1 and 50:" << endl;
    
while (isTrue == 1) {                                                           //while loop keeps the numbers being guessed between 1 and 50
    
    cin >> userGuess;                                                           //accepts user input inside the while loop 
    if (userGuess < 0 || userGuess > 50) {                                      //conditions user input value
        cout << "Oops, try a number between 1 and 50" << endl;
        isTrue = 1;

    }
    if (userGuess > 0 && userGuess < 51 && userGuess < computerGuess) {         //if user's guess is higher, "too low"
        cout << "Too Low" << endl;
        isTrue = 1;
    }
    if (userGuess > 0 && userGuess < 51 && userGuess > computerGuess) {         //if user's guess is lower, "too high"
        cout << "Too High" << endl;
        isTrue = 1;
    }
    if (userGuess == computerGuess) {                                           //end og guessing game when user choses the right number
        cout << "Just Right" << endl;
        cout << "Goodbye." << endl;
        isTrue = 0;                                                             //condition for while loop to terminate
        
    }
    
}
}