// Rosalia Hernandez
// 21 Feb 2017
// Description: This program uses user input (temperature and wind speed) to 
// compute 2 different windchill equations and outputs the difference between the answers. 

#include <iostream>
#include <cmath> 
using namespace std;

int main () { 
    
    //Declared the important variables 
    double velocity = 0.0;
    double tempF = 0.0;
    double OldStyleWindChill = 0.0;
    double NewStyleWindChill = 0.0;
    double windchillDifference = 0.00;
    
    //requests user input for wind and temperature to use in equations afterwards
    cout << "Insert the Temperature: " << endl;
    cin >> tempF;
    cout << "Insert the wind speed: " << endl;
    cin >> velocity; 
    
    //declared the difficult (non-PEMDAS) math functions to input into the larger regular equation
    double squareVelocity = sqrt (velocity);
    double powerVelocity = pow (velocity, 0.16);
    
    //this is the larger regular equation using the variables declared previously
    OldStyleWindChill = 0.081 * ( 3.71 * squareVelocity + 5.81 - 0.25 * velocity) * (tempF - 91.4) + 91.4;
    NewStyleWindChill = 35.74 + 0.6215 * tempF - 35.75 * powerVelocity + 0.4275 * tempF * powerVelocity; 
    windchillDifference = abs ( OldStyleWindChill - NewStyleWindChill) ;
    
    //outputs the information chart-style
    cout << "Wind Speed" << "  " << " Old Formula " << "  " << " New Formula " << "  " << " Difference " << endl;
    cout << velocity << "MPH          " << OldStyleWindChill << "         " <<  NewStyleWindChill << "        " << windchillDifference << endl;
    
    
    
}