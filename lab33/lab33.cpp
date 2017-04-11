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
    
    computerGuess = randomNumber();

cout << "Guess the number chosen between 1 and 50:" << endl;
    
while (isTrue == 1) {
    
    cin >> userGuess; 
    if (userGuess < 0 || userGuess > 50) {
        cout << "Oops, try a number between 1 and 50" << endl;
        isTrue = 1;

    }
    if (userGuess > 0 && userGuess < 51 && userGuess < computerGuess) {
        cout << "Too Low" << endl;
        isTrue = 1;
    }
    if (userGuess > 0 && userGuess < 51 && userGuess > computerGuess) {
        cout << "Too High" << endl;
        isTrue = 1;
    }
    if (userGuess == computerGuess) {
        cout << "Just Right" << endl;
        cout << "Goodbye." << endl;
        isTrue = 0;
        
    }
    
}
}