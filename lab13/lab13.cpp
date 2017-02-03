//Rosalia Hernandez
//February 2nd 2017
//Description: This code calculates the U.S. population for future years

#include <iostream>
using namespace std;

int main () { 
    
    int addYears = 0; 
    int numYear = 2017;
    int currentPopulation = 324472955;
    int newBirth = 8;
    int newDeath = 11;
    int newMigrant = 29;
    int netGainPerson = (60/((60/newBirth) + (60/newMigrant) - (60/newDeath))); 
    /*the above calculates net gain of a person adding births and migrants per minute, 
    subtracting deaths per minute and then calculating the info back into seconds 
    to get 15 net gain person per minute. use this later to calculate net gain person
    per year in future population*/
    
    cout <<"Today, in 2017, the United States population is ";
    cout << currentPopulation <<"."<< endl;
    cout << endl;
    cout << "Enter the amount of years in the future for which you would"<< endl;  
    cout << "like to estimate the population for: ";
    cin >> addYears;
    cout << endl;  
   
   int futurePopulation = (((((60/netGainPerson)*60)*24)*365)* addYears) + currentPopulation;
   numYear += addYears; 
   /*after the user inputs addyears, the program needs to use that information
   to calculate the future years' population*/
   
    cout <<"In the year " << numYear << ", the population will be ";
    cout << futurePopulation << " in the United States." << endl;
    
    
}

