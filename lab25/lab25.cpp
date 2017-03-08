// Rosalia Hernandez
// 7 March 2017
// The program uses a class to store data for 5 books.

#include <iostream>
#include <string>
using namespace std;


class BookInfo {
    public: 
        void SetAuthor (string authorName) {
            writerName_ = authorName; 
        };
        void SetTitle (string titleName){
            bookName_ = titleName;
        };
        int SetYear (int yearDate) {
            copyrightYear_ = yearDate;
        };
        string GetAuthor () {
            return writerName_ ;
        };
        string GetTitle (){
            return bookName_ ;
        };
        int GetYear (){
            return copyrightYear_ ;
        };
        void Print (){
            cout << GetAuthor() << " "<< GetTitle() << " " << GetYear() << endl;
        };
        
    private:
        string writerName_;
        string bookName_;
        int copyrightYear_;
};


int main () {
    BookInfo b1;
    BookInfo b2;
    BookInfo b3;
    BookInfo b4;
    BookInfo b5;
    
    string a1 = " ";
    string t1 = " ";
    int d1 = 0;
    getline (cin, a1);
    getline (cin, t1);
    cin >> d1;
    b1.SetAuthor(a1);   
    b1.SetTitle (t1);
    b1.SetYear (d1);
    
    string a2 = " ";
    string t2 = " ";
    int d2 = 0;
    getline (cin, a2);
    getline (cin, t2);
    cin >> a2;
    b2.SetAuthor(a2);   
    b2.SetTitle (t2);
    b2.SetYear (d2);
    
    b1.Print();
    b2.Print();
 
    
}