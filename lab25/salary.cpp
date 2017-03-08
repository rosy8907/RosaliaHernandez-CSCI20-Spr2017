#include <iostream>
#include <string>  //Allows us to use strings
using namespace std;


class Salary
{
    private: 
        double annual_;
    public:
        void SetAnnualSalary(double salary)
        {
            annual_ = salary;
        }
        double GetAnnualSalary()
        {
            return annual_;
        }
        void Print()
        {
             cout<<"$"<<annual_<<endl;
        }
};

int main () {
    Salary.SetAnnualSalary (1000);
    Salary.GetAnnualSalary();
    Salary.Print();
}