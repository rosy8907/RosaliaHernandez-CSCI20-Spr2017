// CREATED BY: Rosalia Hernandez
// CREATED ON: 9 MARCH 2017
// This program is a conversion program from miles to feet, yards and inches. 

#include <iostream>
using namespace std;


class Conversion {
    public:
         void SetMileFromInches (double i) { distMiles_ = i; }  //assigns the i to the private variable
         void SetMileFromFeet (double f) { distMiles_ = f; }    //assigns the f to the private variable
         void SetMileFromYards (double y) { distMiles_ = y;}    // assigns the y to the private variable
         double GetMileAsInches () {double inches = distMiles_ * 63360; return inches; } //uses the private variable to convert to inches
         double GetMileAsFeet () {double feet = distMiles_ * 5280 ; return feet;}  //uses the private variable to convert to inches
         double GetMileAsYards () {double yards = distMiles_ + 1760; return yards;} //uses the private variable to convert to yards
         double GetMiles() { return distMiles_ ;} //grabs the private variable
         double PrintConversions (); 
         Conversion () { distMiles_ = 1;} //default construct set to one
         Conversion (double mVal) { distMiles_ = mVal;} //construct that can convert any number
    private:
        double  distMiles_ ; //private variable
};



double Conversion::PrintConversions() { //prints the report in the main function
    cout << GetMiles() << " Miles is " << GetMileAsFeet() << " Feet."<< endl;
    cout << GetMiles() << " Miles is " << GetMileAsYards() << " Yards." << endl;
    cout << GetMiles() << " Miles is " << GetMileAsInches() << " Inches." << endl;
    cout << endl;
}


int main() {
    Conversion part1;      //uses the class to make conversions
    Conversion part2(34);
    Conversion part3(16);
    Conversion part4(20);
    
    part1.PrintConversions(); //uses the print function of the class to display output 
    part2.PrintConversions();
    part3.PrintConversions();
    part4.PrintConversions();
}