// Rosalia Hernandez
// 8 May 2017
// Test grading program that compares two files, one with the correct answers and one with 
// a student's answers. It will output the information into another file with the
// student's name, missed questions and overall grade. 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class TestGrader {
    private:                                                                    // The private variables are the outputs that i need for each student 
        int missedQ[19];                                                        // which are the missed questions, overall grade and their name
        char overallGrade_;
        string studentName_;
        
    public: 
        TestGrader() {                                                          // Default
            studentName_ = "No Name";
            missedQ[0] = 0;
            overallGrade_ = 'N';
        }
        void setOverallGrade(char studentKey[], char masterKey[], string firstM, string firstS, string secondM, string secondS, string thirdM, string thirdS) {
            double points = 0;                                                  // Compares the student answers with the master key 
            for (int i = 0; i < 18; i ++) {
                    if (studentKey[i] == masterKey[i]) {
                       points = points + 1.0;
                    }
                    if (studentKey[i] != masterKey[i]) {
                        
                        if (studentKey[i] == '?') {
                            points = points;
                        }
                        else {
                            
                            points = points - 0.25;
                        }
                    }
            }
            if (firstS == firstM) {                                             //includes the last answers which are strings, not characters
                points = points + 1.0;                                          //adds up the points to determine grade
            }
            if (secondS == secondM) {
                points = points + 1.0;
            }
            if (thirdS == thirdM) {
                points = points + 1.0;
            }
           
            if (firstS != firstM) {
                if (firstS == "?") {
                    points = points;
                }
                else {
                points = points - 0.25;
                }
            }
            if (secondS != secondM) {
                if (secondS == "?") {
                    points = points;
                }
                else {
                points = points - 0.25;
                }
            }
            if (thirdS != thirdM) {
                if (thirdS == "?") {
                    points = points;
                }
                else {
                points = points - 0.25;
                }
            }
            
                    points = points / 21;
                    
                    if (points > 0.60) {                                        //Determines grades based on percentages of total possible points
                        overallGrade_ = 'D';
                    }
                    if (points  > 0.70) {
                        overallGrade_ = 'C';
                    }
                    if (points  > 0.80) {
                        overallGrade_ = 'B';
                    }
                    if (points  > 0.90) {
                        overallGrade_ = 'A';
                    }
                    if (points < 0.60) {
                        overallGrade_ = 'F';
                    }
        } 
        void setMissedQuestions( char studentKey[], char masterKey[]) {         //compares both arrays to determind missed questions
            
            for (int i = 0; i < 18; i ++) {
                if (studentKey[i] == masterKey[i]) {
                      missedQ[i] = 0;
                    }
                if (studentKey[i] != masterKey[i]) {
                        
                        if (studentKey[i] == '?') {
                            missedQ[i] = 1;
                        }
                        else {
                            missedQ[i] = 1;
                        }
                    }
            }

        }
        void setStudentName (string first, string last) {                       //includes the students name
            studentName_ = first + " " + last;
        }
        void getReport () {                                                     //creates the final report that will be displayed on a seperate file and on the screen
           
            ofstream fout;
            fout.open("report.txt", std::ofstream::app);                        //http://www.cplusplus.com/reference/fstream/ofstream/open/
                                                                                //I found part of line 119 on the c++ website, it appends the fout so it doesn't rewrite over
            fout << endl << "Student Name: " << studentName_ << endl;           // the previous information
            cout << endl << "Student Name: " << studentName_ << endl;
            cout << "Overall Grade: " << overallGrade_ << endl;
            fout << "Overall Grade: " << overallGrade_ << endl;
            cout << "Missed Question(s): ";
            fout << "Missed Question(s): ";
             for (int i = 0; i < 18; i++) {
                 if (missedQ[i] == 1) {
                    cout << i + 1 << ",";
                    fout << i + 1 << ",";
                }
             }
            
            cout << endl;
            fout << endl;
            
            fout.close();
        }
};

int main() {
    string firstName;                                                           //variables needed to save the information from both input files
    string lastName;
    char keyTest[21];
    char studentTest[21];
    string firstWordS;
    string firstWordK;
    string secondWordS;
    string secondWordK;
    string thirdWordS;
    string thirdWordK;

    
    ifstream finK;
    ifstream finS;
    ofstream fout;

    finS.open("studentanswers.txt");
    finK.open("answerkey.txt");
    fout.open("report.txt");
    
    while (!finS.eof()) {                                                       //while loop reads until the student answers file is at end of file
        
        TestGrader grading;
    
        finS >> firstName;                                                      // takes in first and last name to send into class
        finS >> lastName;
    
        for (int i = 0; i < 18; i++){                                           // takes in all multiple choice questions to send to class
            finS >> studentTest[i];
            finK >> keyTest[i];
        }
        
        finS >> firstWordS;                                                     // takes in the last 3 fill in questions to send to class
        finK >> firstWordK;
        
        finS >> secondWordS;
        finK >> secondWordK;
        
        finS >> thirdWordS;
        finK >> thirdWordK;
            
        grading.setOverallGrade(studentTest, keyTest, firstWordK, firstWordS, secondWordK, secondWordS, thirdWordK, thirdWordS );
        grading.setMissedQuestions(studentTest, keyTest);                       // runs the functions in the class to generate report
        grading.setStudentName(firstName, lastName);
        
        grading.getReport();                                                    //report generates once but since its in a while loop, it will keep generating until student
                                                                                // answers file reaches the end.
    }
    
    

    finK.close();
    finS.close();
    fout.close();
    
    
}
