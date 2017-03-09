// Rosalia Hernandez
// 9 MARCH 2017
// This program converts temperatures between Kelvin, Farenheit, and Celsius.

#include <iostream>
using namespace std;

class TemperatureConverter {                                             // class for temperature conversions
    public:
        void SetTempFromKelvin(double kVal) ;                       
        void SetTempFromCelsius(double cVal);
        void SetTempFromFahrenheit(double fVal);
        double GetTempFromKelvin();
        double GetTempAsCelsius();
        double GetTempAsFahrenheit();
        double PrintTemperatures();
        TemperatureConverter() {kelvin_ = 0;}                         // default construct sets kelvin to 0
        TemperatureConverter(double kVal) { kelvin_ = kVal; }         // overloaded constructor inputs a value into kelvin
    private:
        double kelvin_ ;                                                // private variable kelvin_
};




void TemperatureConverter::SetTempFromKelvin(double kVal) {             // sets a value into kelvin_
    kelvin_ = kVal;
    return;
}

void TemperatureConverter::SetTempFromCelsius(double cVal){             // changes kelvin into celsius
    kelvin_ = cVal + 273.15;
}

void TemperatureConverter::SetTempFromFahrenheit(double fVal) {         // changes kelvin into fahrenheit
     kelvin_ = (5 * (fVal - 32) /9) + 273.15;
}

double TemperatureConverter::GetTempAsFahrenheit() {                    // Gets kelvin that's changed into fahrenheit
    double fahrenheit = (((kelvin_ - 273.15) * 9)/5 + 32);
    return fahrenheit;
}

double TemperatureConverter::GetTempAsCelsius() {                       // calls for the celsius version of kelvin
    double celsiusVal = kelvin_ - 273.15;
    return celsiusVal;
}

double TemperatureConverter::GetTempFromKelvin() {                      // Gets kelvin amount
    return kelvin_;
}

double TemperatureConverter::PrintTemperatures() {                      // prints the kelvin, fahrenheit, and celsius version of kelvin
    cout << "Kelvin: " << GetTempFromKelvin() << endl;
    cout << "Celsius: " << GetTempAsCelsius() << endl;
    cout << "Fahrenheit: " << GetTempAsFahrenheit() << endl;
    cout << endl;
}

/* Created By: April Browne
 * Created On: 9/22/2016
 * This program will run the Temperature Converter Class
 */
 
// #include<iostream>
// #include "lab9.cpp"
// using namespace std;

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}