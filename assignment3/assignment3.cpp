// Rosalia Hernandez
// 6 April 2017
// This program play Rock Paper Scissors Lizard Spock with the user and the best out of 3, 5 or 7 wins the game.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Score {                                                                   //The class keeps track of the score
    public: 
        int SetScore (int keepScore);
        int GetScore ();
    private:
        int score_ ;
};

int Score::SetScore (int keepScore) {
    score_ = keepScore;
}

int Score::GetScore() {
    int newScore;
    newScore = score_ + 1;
    return newScore;
}

int randomNumber () {                                                           //function that generates a random number between 1 and 5 using the time as a seed 
    int number;
    srand(time(0));       
   number = ( rand() % 5 ) + 1 ; 
}

int main() { 

    
    Score computerScore;    
    Score userScore;
    int oneScore = 0;                                           //oneScore is to keep track of the computer's score
    int twoScore = 0;                                           //twoScore is to keep track of the user's score
    int totalScore = 0;
    int totalRounds = 0;                                          //the user choses total games of 3, 5, or 7
    int userPick = 0;                                            //keeps the number for the choice of the user(rock paper scissors..etc)
    int computerPick = 0;                                        //keeps the number the computer picks for the game(rock paper scissors...etc)
    int isTrue = 1;
   
    cout << "The best out of 3, 5, or 7 wins. Enter the number of rounds you'd like to play." << endl;
    cin >> totalRounds;                                           //lets user choose total game out of 3, 5, or 7
    
    while (isTrue == 1) {
        switch (totalRounds) {                                    //if a user enters a number other than 3, 5 or 7, this will let them chose again
            case 3:
                totalRounds = 3;
                isTrue = 0;
                break;
            case 5:
                totalRounds = 5;
                isTrue = 0;
                break;
            case 7: 
                totalRounds = 7;
                isTrue = 0;
                break;
            default:
                isTrue = 1;
                cout << "Try Again, the number of rounds are 3, 5, and 7." << endl;
                cin >> totalRounds;
                break;
          
        }
         
    }    
   
    cout << "Great! It's time to play. Pick a number to choose which object you'd like to pick." << endl ;
    
    while (oneScore <  ( totalRounds + 1 ) / 2  && twoScore < ( totalRounds + 1 ) / 2 ) {
        cout << "1. Scissors" << endl << "2. Rock" << endl << "3. Paper" << endl;
        cout << "4. Lizard" << endl << "5. Spock" << endl;
        cin >> userPick;   
        computerPick = randomNumber();
        
        if (userPick == 1) {
            cout << "You Picked Scissors. " ;
          switch (computerPick) {
            case 1:
                cout << "Your opponent picked Scissors as well." << endl;
                cout << "It's a TIE!" << endl;
                break;
            case 2:
                cout << "Your opponent picked Rock.";
                cout << "Rock crushes Scissors!" << endl;
                cout << "You LOSE this round." << endl;
                oneScore = oneScore + 1;
                break;
            case 3:
                cout << "Your opponent picked Paper.";
                cout << "Scissors cuts Paper!" << endl;
                cout << "You WIN this round." << endl;
                twoScore = twoScore + 1;
                break;
            case 4:
                cout << "Your opponent picked Lizard." ;
                cout << "Scissors decapitates Lizard!" << endl;
                cout << "You WIN this round." << endl;
                twoScore = twoScore + 1;
                break;
            case 5: 
                cout << "Your opponent picked Spock." ;
                cout << "Scissors smashed by Spock!" << endl;
                cout << "You LOSE this round." << endl;
                oneScore = oneScore + 1;
                break;
          }
        
          totalScore = (oneScore + 1) + (twoScore + 1);
          
        }                                                //the conditions for who wins each round starts here
        if (userPick == 2) {
            cout << "You picked Rock." << endl;
            switch (computerPick) {
                case 1:
                    cout << "Your opponent picked Scissors.";
                    cout << "Rock crushes Scissors." << endl;
                    cout << "You WIN this round." << endl;
                    twoScore = twoScore + 1;
                    break;
                case 2:
                    cout << "Your opponent picked Rock." ;
                    cout << "You TIE this round." << endl;
                    break;
                case 3:
                    cout << "Your opponent picked Paper." ;
                    cout << "Paper covers Rock. " << endl;
                    cout << "You LOSE this round." << endl;
                    oneScore = oneScore + 1;
                    break;
                case 4:
                    cout << "Your opponent picked Lizard." ;
                    cout << "Rock crushes Lizard" << endl;
                    cout << "You WIN this round" << endl;
                    twoScore = twoScore + 1;
                    break;
                case 5:
                    cout << "Your opponent picked Spock" ;
                    cout << "Spock vaporizes Rock" << endl;
                    cout << "You LOSE this round." << endl;
                    oneScore = oneScore + 1;
                    break;
            }
            
            totalScore = (oneScore + 1) + (twoScore + 1);
            
        }
        if (userPick == 3) {
            cout << "You picked Paper." << endl;
            switch (computerPick) {
                case 1:
                    cout << "Your opponent picked Scissors." ;
                    cout << "Scissors cuts paper" << endl;
                    cout << "You LOSE this round." << endl;
                    oneScore = oneScore + 1;
                    break;
                case 2:
                    cout << "Your opponent picked Rock." ;
                    cout << "Paper covers Rock" << endl;
                    cout << "You WIN this round" << endl;
                    twoScore = twoScore + 1;
                    break;
                case 3:
                    cout << "Your opponent picked Paper." ;
                    cout << "This round is a TIE." << endl;
                    break;
                case 4:
                    cout << "Your opponent picked Lizard." ;
                    cout << "Lizard eats Paper" << endl;
                    cout << "You LOSE this round" << endl;
                    oneScore = oneScore + 1;
                    break;
                case 5:
                    cout << "Your opponent picked Spock" ;
                    cout << "Paper disproves Spock" << endl;
                    cout << "You WIN this round." << endl;
                    twoScore = twoScore + 1;
                    break;
            }
            
            totalScore = (oneScore + 1) + (twoScore + 1);
            
        }
        if (userPick == 4) {
            cout << "You picked Lizard." << endl;
            switch (computerPick) {
                case 1:
                    cout << "Your opponent picked Scissors." ;
                    cout << "Scissors decapitates Lizard." << endl;
                    cout << "You LOSE this round." << endl;
                    oneScore = oneScore + 1;
                    break;
                case 2:
                    cout << "Your opponent picked Rock." ;
                    cout << "Rock crushes Lizard" << endl;
                    cout << "You LOSE this round." << endl;
                    oneScore = oneScore + 1;
                    break;
                case 3:
                    cout << "Your opponent picked Paper." ;
                    cout << "Lizard eats paper. " << endl;
                    cout << "You WIN this round." << endl;
                    twoScore = twoScore + 1;
                    break;
                case 4:
                    cout << "Your opponent picked Lizard." << endl;
                    cout << "It's a TIE." << endl;
                    break;
                case 5:
                    cout << "Your opponent picked Spock" ;
                    cout << "Lizard poisons Spock" << endl;
                    cout << "You WIN this round." << endl;
                    twoScore = twoScore + 1;
                    break;
            }
            
            totalScore = (oneScore + 1) + (twoScore + 1);
            
        }
        if (userPick == 5) {
            cout << "You picked Spock." << endl;
            switch (computerPick) {
                case 1:
                    cout << "Your opponent picked Scissors.";
                    cout << "Spock smashes Scissors" << endl;
                    cout << "You WIN this round." << endl;
                    twoScore = twoScore + 1;
                    break;
                case 2:
                    cout << "Your opponent picked Rock." ;
                    cout << "Spock vaporizes Rock." << endl;
                    cout << "You WIN this round." << endl;
                    twoScore = twoScore + 1;
                    break;
                case 3:
                    cout << "Your opponent picked Paper." ;
                    cout << "Paper disproves Spock " << endl;
                    cout << "You LOSE this round." << endl;
                    oneScore = oneScore + 1;
                    break;
                case 4:
                    cout << "Your opponent picked Lizard." ;
                    cout << "Lizard poisons Spock" << endl;
                    cout << "You LOSE this round." << endl;
                    oneScore = oneScore + 1;
                    break;
                case 5:
                    cout << "Your opponent picked Spock" << endl;
                    cout << "This round is a TIE." << endl;
                    break;
            }
            
            totalScore = (oneScore + 1) + (twoScore + 1);
            
        }
        if ( (userPick > 5) || (userPick<=0) ){
            cout << "OOPS, choose a number between 1 and 5." << endl;
        }
        
    }
    
    oneScore = oneScore - 1;
    twoScore = twoScore - 1;
    
    computerScore.SetScore(oneScore);                                           //gets the score based on their wins
    userScore.SetScore(twoScore);

    cout << "Opponent score: " << computerScore.GetScore() << endl; 
    cout << "Your score: " << userScore.GetScore() << endl;
    
    if ( computerScore.GetScore() < userScore.GetScore() ) {
        cout << "You win the game!" << endl;
    }                //checks conditions to declare a winner
    if (computerScore.GetScore() > userScore.GetScore() ) {
        cout << "You lose the game!" << endl;
    }
}