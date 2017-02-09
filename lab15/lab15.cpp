// Rosalia Hernandez
// 9 February 2017
// Description: This code will play mad libs with the user

#include <iostream>
#include <string> 
using namespace std;

int main () {
    
    string wordName;
    string wordDescriptive;
    string wordDescriptive2;
    string wordThing;
    string wordThing2;
    string wordAnimal;
    string wordGame;
    
    cout << "Enter your name:" << endl;
    getline (cin, wordName);
    cout << endl;
    cout << "Hey " << wordName << ", let's play Mad Libs!"<< endl;
    cout << "You will need to choose six different words." << endl;
    cout << endl;
    cout << "Enter a descritive word or phrase:" << endl;
    getline (cin, wordDescriptive);
    cout << "Enter another descriptive word or phrase:" << endl;
    getline (cin, wordDescriptive2);
    cout << "Enter a noun (a thing):" << endl;
    getline (cin, wordThing);
    cout << "Enter another noun (thing):" << endl;
    getline (cin, wordThing2);
    cout << "Enter an animal that you like (plural):" << endl;
    getline (cin, wordAnimal);
    cout << "Enter a game that you like to play:" << endl;
    getline (cin, wordGame);
    
    cout << endl;
    cout << "A Vacation Is... " << endl;
    cout << "by " << wordName << endl;
    cout << endl;
    cout << "A vacation is when you take a trip to some " << wordDescriptive << endl;
    cout << "place with your " << wordDescriptive2 << " family. Usually, " << endl;
    cout << "you go to some place that is near a/an " << wordThing << " or up on a/an " << endl;
    cout << wordThing2 << ". A good vacation place is one where you can ride " << endl;
    cout << wordAnimal << " or play " << wordGame << "." << endl;
    
    
    
    
}