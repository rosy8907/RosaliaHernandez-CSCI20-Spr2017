// Rosalia Hernandez
// 28 FEB 2017
// This program generates a random number between two numbers that the user inputs

#include <iostream>
using namespace std;

//defining the first function to swap the two numbers that will be chosen by the user
int numSwap ( int xNum, int yNum, int& NewxNum, int& NewyNum) { 
    NewxNum = yNum;
    NewyNum = xNum;
}


//defining the random number generator that uses the previous function and outputs a random number
int randomNum (int xNum, int yNum) {
    int NewxNum = 0;
    int NewyNum = 0;
    numSwap (xNum, yNum, NewxNum, NewyNum);                       //this is using the previous function
    int chosenNumber = (rand () % (NewxNum - NewyNum)) + NewyNum; //assigns the random number to a variable
    cout << chosenNumber << endl;
    
}


int main () {
    //we are only using these two variables within the main function so we declare them here
    int xNum = 0;
    int yNum = 0;
    
    //asks for the user to input the numbers that will be used to generate random numbers
    cout << "Enter a small numnber: " << endl;
    cin >> xNum;
    cout << "Enter a higher number than the previous one: " << endl;
    cin >> yNum;
    cout << endl;
    cout << "The random number between the number " << xNum <<" and " << yNum <<  " is: " << endl;
    
    //the main function only uses this one function
    randomNum (xNum, yNum); 
}
