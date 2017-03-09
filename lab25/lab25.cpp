// Rosalia Hernandez
// 7 March 2017
// The program uses a class to store data for 5 books.

#include <iostream>
#include <string>
using namespace std;


class BookInfo {
    public: 
        void SetAuthor (string authorName = "none") {
          writerName_ = authorName; 
        };
        void SetTitle (string titleName ){
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
        int GetYear () {
            return copyrightYear_ ;
        };
        void Print (string a1, string t1, int y1) {
            SetAuthor(a1);
            SetTitle(t1);
            SetYear(y1);
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
    
   string author1 = " ";
   cin.clear();
   getline (cin, author1);
   
   string title1 = " ";
   cin.clear();
   getline (cin, title1);
   int year1;
   cin >> year1;
   cin.clear();
   cin.ignore();
   string author2 = " ";
   
   getline (cin, author2);
   string title2 = " ";
   cin.clear();
   getline (cin, title2);
 
   int year2;
   cin >> year2;
   
   
   b1.Print(author1, title1, year1);
   b2.Print(author2, title2, year2);

    
}