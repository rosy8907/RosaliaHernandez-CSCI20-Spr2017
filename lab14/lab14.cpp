// Rosalia Hernandez
// February 7, 2017
// Description: This code converts total cents into quarters, dimes, nickels
// and pennies while charging a fee and returning the remainder.

#include <iostream>
using namespace std;

int main () { 
    
    int     numQuarters = 0;
    double  amtQuarters = 0.0;
    int     numDimes = 0;
    double  amtDimes = 0.0;
    int     numNickels = 0;
    double  amtNickels = 0.0;
    int     numPennies = 0;
    double  amtPennies = 0.0;
    int     totalChange = 0;
    double  totalMoney = 0;
    double  changeFee = 0.109;
    double  totalFee = 0.0;
    
    
    cout << "Enter the amount of change to be sorted:";
    cin >> totalChange ;
    
    /* The below calulates the number of each coin there will be in the amount of cents entered by the user*/
    numQuarters = (totalChange / 25); 
    numDimes   = (totalChange % 25) / 10;
    numNickels = ((totalChange % 25) % 10) / 5;
    numPennies = (((totalChange % 25) % 10) % 5);
    
    /* The below uses the amount of each coin and multiplies by its value to form a dollar amount*/
    amtQuarters = static_cast <double> (numQuarters) * (static_cast <double> (0.25)) ;
    amtDimes = static_cast <double> (numDimes) * (static_cast <double> (0.1));
    amtNickels = static_cast <double> (numNickels) * (static_cast <double> (0.05));
    amtPennies = static_cast <double> (numPennies) * (static_cast <double> (0.01));
    
    
    cout << numPennies << " pennies." << endl;
    cout << numNickels << " nickels." << endl;
    cout << numDimes << " dimes." << endl;
    cout << numQuarters << " quarters" << endl;
    cout << endl;
    cout << "The total amount is " ;
    cout << "$" << amtQuarters + amtDimes + amtNickels + amtPennies << "." << endl;
    
    /*The below sums up all the coin amounts and multiplies by the 10.9% fee*/
    totalFee = changeFee * (amtQuarters + amtDimes + amtNickels + amtPennies);
    
    cout << "The 10.9% fee will be " << totalFee << "." << endl;
    
    /* The below takes the total amount of money and subtract the fee*/
    totalMoney = (amtQuarters + amtDimes + amtNickels + amtPennies) - totalFee;
    
    cout << "Your total take-home will be $" << totalMoney << "." << endl;
    cout << "Thank You. Come Again." << endl;
    
    }
