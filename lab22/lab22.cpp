// Rosalia Hernandez
// 23 FEB 2017
// Description: This program generates a random number between 1 and 100.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomNumber () {      //declaring the function that generates a random number
    srand(time(0));        // uses the time as a seed to create a random number on every run
    cout << "Your random number is " << ( rand() % 101 ) + 1 << "."<< endl;  //executes the random number
}

int main () {
    randomNumber(); //calling the function the creates and executes the random number
 }