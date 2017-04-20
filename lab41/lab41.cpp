// Rosalia Hernandez
// 11 April 2017
// 

#include <iostream>
using namespace std;

class ArrayTools {
    public:
        ArrayTools( )
        int Find_min(double myArray[], int numVals) {
            int i = 0;
            numVals = myArray[i];
            for (i=0; i<myArray, i++) {
                if (myArray[i] < numVals) {
                    numVals = myArray[i];
                }
            }
           return numVals; 
        }
        int Find_max(double myArray[], int numVals ) {
            int i = 0;
            numVals = myArray[i];
            for (i=0; i<array_, i++)
                if (myArray[i] > numVals) {
                    numVals = myArray[i];
                }
           return numVals;
        }
        int Find_sum() {
            int i = 0;
            for (i=0; i < array_; i++)
        }
        int Search() {
            
        }
        int Is_sorted() {
            
        }  
        void Print() {
            int i = 0;
            for (i = 0; i < array_; i++) {
                cout << "You entered: ";
                cout << myArray[i] << endl;
            }
        }
        
    private:
       
};



// April Browne's main function

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];                                                          //R: Set's the array to size of 10
    
    for(int i = 0; i < SIZE; i++){                                              //R: User inputs 10 values 
        cin << myArray[i];
    }
    ArrayTools a(myArray);                                                      //R: creates object a(parameter=)
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}