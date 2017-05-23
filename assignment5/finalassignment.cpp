/* Rosalia Hernandez
 * 23 May 2017
 * Text-Based memory game for spelling tricky english terms. It uses a class to compare arrays and keep track of errors.
 * It uses file input for the terms being used so they can be changed at any point, and uses file output to display
 * where the user made errors.
 */
 
#include <iostream>
#include <fstream> //allows me to use file input and output
#include <string> 
#include <iomanip> //allows me to use setw for organization purposes

using namespace std;

class guessWords { 
    private: 
      string Words[10]; //set the private array to size 10
      
    public: 
      void setWords( string inputWords[] , int constantNum ) { //function to fill private array with the words from the file
        string tempString[constantNum];       //as a bonus, it flips the words and starts from the bottom
        for (int i = 0; i < constantNum; i++) {
            tempString[i] = inputWords[i];
            Words[i] = inputWords[constantNum - 1 - i];
            Words[constantNum - 1 - i] = tempString[i];
        }
      }

      int compareWords (string guestWords[], int constantNum){ //compares the array words from the file to the user input words to keep track of scoring and misspelled words
        int incorrect = 0;
        double score = 0.0;
        ofstream fout;    //allows me to output the information the the output file.
        fout.open("summary.txt");
        fout << setw(13) << "Correct Word:" << setw(8) << " " << setw(13) << "Your Word:" << endl ; //setfill and setw allow me to organize the way the file output looks
        fout <<  setfill('-') << setw(35) << " " << endl;
        fout << setfill(' ');
          for(int i=0; i< constantNum; i++){  //comparing words here
            if (Words[i] == guestWords[i]) { //if words match compare them
              score = score + 1.0;
              incorrect = incorrect;
              fout << setw(13) << left<< Words[i] << setw(8) << " is " << setw(13) << right << guestWords[i] << endl;
            }
            if (Words[i] != guestWords[i]) { //if words dont match compare them
              incorrect = incorrect + 1;
              fout << setw(13) << left << Words[i] << setw(8) << " is not " << setw(13) << right << guestWords[i] << endl;
            }
          }
        if (incorrect > 0) {
          incorrect = 11;
          fout << endl << "Percent Correct: " << static_cast<double> (score / constantNum) << "%" << endl; //calculates the percent of how many words you got right
        }
        fout.close();
        return incorrect;
    
      }
      
      void getWords (int constantNum) { // prints a subarray depending what turn the user is on, the first turn prints 3 words
        for (int i = 0; i < constantNum; i++) {
          cout << i + 1 << ". " << Words[i] << endl;
        }
      }
};



int main () {
    
    int CONST_NUM = 10; //size of arrays must be the same size of the private array in the class
    string listWords[CONST_NUM];
    string wordArray[CONST_NUM];
    string myWords[CONST_NUM];
    int turn = 3;   // turn starts at 3 because the first turn should print 3 words.
    int turn1 = 0; //used as an exit strategy in a forloop 
    
    ifstream fin; // opens the file we get the words from so the user can play
    fin.open("words.txt");

    for (int i = 0; i < CONST_NUM; i++) { //saves the terms from the file into an word array
        getline (fin, wordArray[i]);
    }

    fin.close();
    
    guessWords MemoryGame;
    MemoryGame.setWords(wordArray, CONST_NUM); //pushes the word array into the class so it becomes the array in the private section


    cout << "This is a text based memory game." << endl; //greetings and instructions
    cout << "You will be tested on how well you remember how to spell some tricky" << endl;
    cout << "english terms. Once you start, a set of words will be displayed. When" << endl;
    cout << "you think you have memorized how to spell this set of words you can " << endl;
    cout << "choose to start playing the game. Take as much time as you need, these" << endl;
    cout << "words may be tricky. After each turn is passed, the list of words will" << endl;
    cout << "get longer. If you misspell a word, the game will end and your results" << endl;
    cout << "will be in the summary text file which will display all of the words " << endl;
    cout << "that were entered for the last turn you played. Type exit to leave the game" << endl;
    cout << setw(30) << right << "Good Luck!" << endl << endl; 
    
    char playGame = 'Y';
    char ready = 'Y';
    cout << "Are you ready to play the game? Y/N" << endl;
    cin >> playGame; //lets the user leave if they don't want to play the game after reading the instructions
    
    if (playGame == 'n' || playGame == 'N') { //tests the user input to decide if the user will continue or not
      turn = 11;
      cout << "Sorry to see you go!" << endl;
    }
    
while (turn < CONST_NUM  ){ //while the turn the user is on is less than the size of the array, because the turn starts at 3
    if (playGame == 'Y' || playGame == 'y') {
      
      cout << "List begins:" << endl;
      MemoryGame.getWords(turn); //lets the class know how many array words to send out by telling it what turn the user is one
      cout << "Type any single character key to continue.(Not the space button)" << endl;
      cin >> ready;
      system("clear"); //clears the screen so that the user can't see the words that were previously listed.
      cout << endl << "Enter the words in order:" << endl;
      
      for(int i = 0; i < turn ; i++){ //asks for he user input to check if they remember how to spell the words
       
        cout << i + 1 << ". " ;
        cin >> myWords[i];
      if (myWords[i] == "exit") {
        cout << "Sorry to see you go!" << endl; //if the user inputs the word exit it will end the game
        turn1 = 100;
        i = turn + 1;
        
      }
      
      } 

      turn = MemoryGame.compareWords( myWords, turn) + turn; //calculates missed words and returns a value to test. if the user missed a word, the value returned will be 11 + turn

    }

   if (turn1 != 100) { //exit strategy for the word 'exit' being typed, this way, the computer wont enter this part of the program
    if (turn < CONST_NUM + 3) { //if the turn is still less than the size of the array, they pass and will continue playing
      cout << "Congratulations! You passed!" << endl << endl;
    }
    if (turn > CONST_NUM + 3 && turn < 100) { //if not, the game ends.
      cout << "Uh-Oh. Look at the summary text file to see what you got wrong and try again" << endl;
    }
   }
    
    turn ++; //if they continue playing, turn will go up by one and the while loop will reiterate
}
    

}