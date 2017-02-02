//Rosalia Hernandez
//February 2nd 2017
//Description: This code calculates the U.S. population for future years

#include <iostream>
using namespace std;

int main () { 
    
    int addYears = 0;  
    int numPopulation = 324472955;
    int newBirth = 8;
    int newDeath = 11;
    int newMigrant = 29;
    int netGainPerson = (60/((60/newBirth) + (60/newMigrant) - (60/newDeath))); 
    /*the above calculates net gain of a person adding births and migrants per minute, 
    subtracting deaths per minute and then calculating the info back into seconds 
    to get 15 net gain person per minute*/
    
    cin >> addYears;
    cout << endl; 
    /*add the number of years you want to predict the population for*/
    
    int numYear = 2017 + addYears;
    int usPopulation = numPopulation + (((((60/netGainPerson)*60)*24)*365)* numYear);
    /*the us population is calculated by adding the net gain of people
    per year times the number of years plus the starting population number */
    
    
    
    cout <<"In the year " << numYear << ", the population will be ";
    cout << usPopulation << " in the United States." << endl;
    
}

