#include <iostream>
#include <string>  //Allows us to use strings
using namespace std;

//idea from https://www.daniweb.com/programming/software-development/threads/233485/ask-cin-class-object 
    class BookInfo
    {
        string author,title;
        int year;
        public :
         void setInfo() { 
             getline (cin, author);
             getline (cin, title);
             cin >> year;
             
             }
         void getInfo() {
             cout << author << title << year;
         }
        
         
    };
    
    int main () {
        BookInfo book1;
        BookInfo book2;
        
        book1.setInfo();
        book2.setInfo();
        
        book1.getInfo();
        book2.getInfo();
        
     
        
    }