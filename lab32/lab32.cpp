// Rosalia Hernandez
// 28 March 2017
// This program calculates income tax and generates an amount owed to pay or a refund to you due to an overpayment.

#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main () {
    int personalExemption = 0;                                          
    int taxableIncome = 0;
    double taxOwed = 0;
    double taxWithheld = 0;
    string clientName = "No Name";
    
    //Gather the user input from their W2
    cout << "Enter name:" << endl;
    getline (cin, clientName);
    cout << "If you are single, enter 1. If you are married, enter 2:" << endl;
    cin >> personalExemption;
    cout << "Enter your annual gross income rounded to the nearest dollar:" << endl;
    cin >> taxableIncome;
    cout << "Enter the amount of tax withheld:" << endl;
    cin >> taxWithheld;
    
    switch (personalExemption) {                                        // switch statement to determine if married or single
        case 1:
             personalExemption = 3900;
             break;
        case 2:
             personalExemption = 2 * 3900;
             break;
        default:
             cout << "error";
             break;
    }
    
   taxableIncome = taxableIncome - personalExemption;                   // calculation for taxable income to be used to calculate taxes owed
   
   if (taxableIncome <= 0) {                                            // if statement for no taxes owed
       taxOwed = 0;
   }
   
   if (taxableIncome > 0 && personalExemption == 3900) {                // if statement with conditions for the single taxpayer
       if (taxableIncome < 8926) {
           taxOwed = taxableIncome / 10; 
       }
       else if (taxableIncome < 36251) {
           taxOwed = ( (taxableIncome - 8925) * 0.15 ) + 892.5;
       }
       else if (taxableIncome < 87851) {
           taxOwed = ( (taxableIncome - 36250) * 0.25) + 4991.25;
       }
       else {
           taxOwed = ( ( taxableIncome - 87850) * 0.28) + 17891.25;
       }
   }
   
   
   if (taxableIncome > 0 && personalExemption == 7800) {            // if statement with the conditions for the married taxpayer
       if (taxableIncome < 17851 ) {
           taxOwed = taxableIncome / 10;
       }
       else if (taxableIncome < 72501) {
           taxOwed = ( (taxableIncome - 17850) * 0.15) + 1785;
       }
       else { 
           taxOwed = ( (taxableIncome - 72500) * 0.28) + 9982.5;
       }
     }
     
     
    taxOwed = taxOwed - taxWithheld;                                // calculations that takes into consideration what you already paid for taxes
    
   
   if (taxOwed > 0) {                                               // if statement for debt owed to the IRS
      cout << clientName <<", the taxes you owe are $" << taxOwed << "." << endl;
   }

  if (taxOwed < 0) {                                                // if statement for refund if you overpayed
      taxOwed = abs(taxOwed);                                       //use of the cmath library
      cout << clientName <<", the amount of your refund will be $" <<taxOwed << "." << endl;
  }
    
}