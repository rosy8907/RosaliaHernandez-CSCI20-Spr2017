// Rosalia Hernandez
// 11 April 2017
// 

//Q: Why am I getting invalid conversion from int to int*? I have no int*s?


#include <iostream>
using namespace std;

class ArrayTools {
    public:
        ArrayTools(int myArray[]){ 
            myArray = myArray;
            
        }
        int Find_min(int myArray[], int numVals) {
            int minVal = myArray[0];
            for (int i = 0; i < numVals; i++){
                if (minVal > myArray[i]){
                    minVal = myArray[i];
                }
            cout << "Minimum Value is " << minVal << endl;
    }
        }
        int Find_max(int myArray[], int numVals) {
            int maxVal = myArray[0];
            for (int i = 0; i < sizeof(myArray)/4; i++){
                if (maxVal < myArray[i]){
                    maxVal = myArray[i];
                    }
             }
             cout << "Max Value is " << maxVal << endl;
        }
        int Find_sum() {
            int sumVal = 0;
            for (int i = 0; i < sizeof(myArray)/4 ; i++){
                sumVal = sumVal + myArray[i]; 
            }
            
            cout << "sum value is: " << sumVal;
        }
        int Search( int searchValue) {
            for (int i = 0; i < sizeof(myArray)/4 ; i++) {
                if (myArray[i] == searchValue) {
                    cout << "Found match at " << i << endl;
                }
                
            }
            
        }
        int Is_sorted() {
            int sortNum = myArray[0];
            for (int i = 0; i < sizeof(myArray) / 4; i ++) {
                if (myArray[i] > sortNum) {
                    sortNum = myArray[i];
                    if (sortNum > myArray[i]) {
                        cout << "No" <<endl;
                    }
                    else {
                        cout << "Yes." << endl;
                    }
                }
            
            }
        }  
        void Print() {
            cout << "You entered: ";
            for (int i = 0; i < sizeof(myArray)/4 ; i++) {
                cout << myArray[i] << endl;
            }
        }
        
    private:
       int myArray[];
};



// April Browne's main function

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];                                                          //R: Set's the array to size of 10
    
    for(int i = 0; i < SIZE; i++){                                              //R: User inputs 10 values 
        cin >> myArray[i];
    }
    ArrayTools a(myArray);                                                      //R: creates object a(parameter=)
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4) <<endl;
    cout<<"Max: "<<a.Find_max(5, 10) <<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}