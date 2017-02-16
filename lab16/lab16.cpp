// Rosalia Hernandez
// 16 February 2017
// This program makes monsters using a struct. 
// Half of the monsters will be made by user input.

#include <iostream>
#include <string>
using namespace std;

//Begin with a struct to make different monsters with.
struct MonsterStruct {
    string Name;
    string Head;
    string Eyes;
    string Ears;
    string Nose;
    string Mouth;
};
    
int main () {
    //There will be four monsters, these are the objects using the monster struct previously defined
    MonsterStruct MonsterOne;
    MonsterStruct MonsterTwo;
    MonsterStruct MonsterThree;
    MonsterStruct MonsterFour;
    
    //Ask for the user input for one of the monsters
    cout << "Build your own monster. Choose from 4 different styles." << endl;
    cout << "Styles: Zombus, Spritem, Vegitas, Wackus." << endl;
    cout << "First Choose a Name for your monster: " << endl;
    getline (cin, MonsterOne.Name);
    cout << "Build your monster:" << endl;
    cout << "Remember the styles are: Zombus, Spritem, Vegitas, & Wackus." << endl;
    cout << "Head: ";
    getline (cin, MonsterOne.Head);  
    cout << "Eyes: ";
    getline (cin, MonsterOne.Eyes);
    cout << "Ears: ";
    getline (cin, MonsterOne.Ears);
    cout << "Nose: ";
    getline (cin, MonsterOne.Nose);
    cout << "Mouth: ";
    getline (cin, MonsterOne.Mouth);
    
    //Asks for use input for the second monster.
    cout << "Now, build a second monster. Begin by choosing another name:" << endl;
    getline (cin, MonsterTwo.Name);
    cout << "Head: ";
    getline (cin, MonsterTwo.Head);
    cout << "Eyes: ";
    getline (cin, MonsterTwo.Eyes);
    cout << "Ears: ";
    getline (cin, MonsterTwo.Ears);
    cout << "Nose: ";
    getline (cin, MonsterTwo.Nose);
    cout << "Mouth: ";
    getline (cin, MonsterTwo.Mouth);
    
    //Monsters three and four are pre-made by the programmer 
    MonsterThree.Name = "OneMonster";
    MonsterThree.Head = "Zombus";
    MonsterThree.Eyes = "Spritem"; 
    MonsterThree.Ears = "Vegitas";
    MonsterThree.Nose = "None";
    MonsterThree.Mouth = "Wackus";
    
    MonsterFour.Name = "SisterMonster";
    MonsterFour.Head = "Spritem";
    MonsterFour.Eyes = "Vegitas";
    MonsterFour.Ears = "None";
    MonsterFour.Nose = "Wackus";
    MonsterFour.Mouth = "Wackus";

    //Prints all four monsters for the user to see.
    cout << endl;
    cout << "Yay! Here are your monsters, and two of their friends." << endl;
    cout << MonsterOne.Name << " : " << MonsterOne.Head << ", " << MonsterOne.Eyes << ", ";
    cout << MonsterOne.Ears << ", " << MonsterOne.Nose << ", " << MonsterOne.Mouth << endl;
    cout << MonsterTwo.Name << " : " << MonsterTwo.Head << ", " << MonsterTwo.Eyes << ", ";
    cout << MonsterTwo.Ears << ", " << MonsterTwo.Nose << ", " << MonsterTwo.Mouth << endl;
    cout << MonsterThree.Name << " : " << MonsterThree.Head << ", " << MonsterThree.Eyes << ", ";
    cout << MonsterThree.Ears << ", " << MonsterThree.Nose << ", " << MonsterThree.Mouth << endl;
    cout << MonsterFour.Name << " : " << MonsterFour.Head << ", " << MonsterFour.Eyes << ", ";
    cout << MonsterFour.Ears << ", " << MonsterFour.Nose << ", " << MonsterFour.Mouth << endl;
}
