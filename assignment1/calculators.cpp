// Rosalia Hernandez
// 16 February 2017
// This program calculates a person's weekly wages.

#include <iostream>
#include <string>
using namespace std;


struct EmployeeInfo { //struct that will gather employee's information
   string staffName;
   int hoursWorked;
   double hourlyPay;
};


int main () {
   EmployeeInfo empOne;//uses the struct, names it employee one
   
   //Collects the necessary information from the user that is needed to calculate the paystub 
   cout << "Enter Employee Information " << endl; 
   cout << "Name:";
   getline (cin, empOne.staffName);
   cout << "Hourly Pay:";
   cin >> empOne.hourlyPay;
   cout << "Weekly Hours Worked:";
   cin >> empOne.hoursWorked;
   
   //Uses user input to make the calculations
   const double healthInsurance = 130.00;
   double grossWages = static_cast <double> (empOne.hourlyPay * empOne.hoursWorked);
   double taxedWages = (grossWages - healthInsurance) * 0.17;
   double netPay = grossWages - taxedWages - healthInsurance;
   
   //Generates(prints) the final information of the paystub
   cout << endl;
   cout << empOne.staffName << "'s Weekly Pay Stub:" << endl;
   cout << "Hours Worked: " << empOne.hoursWorked << endl;
   cout << "Hourly Pay: $" << empOne.hourlyPay << endl;
   cout << "Gross Wages: $" << grossWages << endl;
   cout << "Deductions: " << endl;
   cout << "    Health Insurance: -$" << healthInsurance << endl;
   cout << "    Taxes: -$" << taxedWages << endl;
   cout << "Net Pay: $" << netPay << endl;
   
    
}