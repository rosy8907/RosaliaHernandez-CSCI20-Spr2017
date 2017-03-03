// Rosalia Hernandez
// 3 MARCH 2017
// This program generates a random number between two numbers that the user inputs
// AND takes that number of pounds, converts it to kilograms, and back to pounds.

#include <iostream>
using namespace std;



// function that swaps the numbers
int numSwap ( int xNum, int yNum, int& NewxNum, int& NewyNum) { 
    NewxNum = yNum;                                              //local variable
    NewyNum = xNum;                                              //local variable
}


//Uses the swap function for fun. Then, generates a random number between two numbers the user inputs.
int randomNum (int xNum, int yNum) {
    int NewxNum = 0;                                              //local variable
    int NewyNum = 0;                                              // local variable
    numSwap (xNum, yNum, NewxNum, NewyNum);                       //this is using the previous function
    int chosenNumber = (rand () % (NewxNum - NewyNum)) + NewyNum; //assigns the random number to a local variable
    return chosenNumber;
    
}

double turnToPounds (double kilograms) {                            // function that converts kilograms into pounds
    const double KG_IN_LB = 2.20462;                                // there are about 2.2 kilograms in a pound
    double conversion = kilograms * KG_IN_LB;                      // the calculation to convert kilograms to pounds
    return conversion;                                             // returns the calculation
    }
    
double turnToKilograms (double pounds) {                          // function that converts pounds to kilograms
    const double LB_IN_KG = 0.453592;                             // there are about 0.4 pounds in a kilogram
    double conversion = pounds * LB_IN_KG;                        // the calculations to convert pounds to kilograms
    return conversion;                                            // returns the calculation
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
    
    int randomNumber = randomNum (xNum, yNum) ;                 // stores the random number into a variable to be used later
    double kilogramsOut = turnToPounds(randomNumber);           // uses turnToPounds function with the random number and stores it in a variable
    double poundsOut = turnToKilograms(kilogramsOut);           // uses turnToKilograms function with the KilogramsOut variable 

    cout << randomNumber << endl;
    cout << endl;
    cout << randomNumber << " pounds is equivalent to " << kilogramsOut << " kilograms." << endl;
    cout << kilogramsOut << " kilograms is equivalent to " << poundsOut << " pounds. " << endl;

}
