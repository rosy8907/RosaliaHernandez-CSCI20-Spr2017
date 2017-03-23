// Rosalia Hernandez
// 23 March 2017
// This program 

#include <iostream>
using namespace std;


double DeviceCharge (int dumbPhone, int smartPhone, int tabletPhone){
    double Charge = 0.0;
    double dumbCharge = 0.0;
    double tabletCharge = 0.0;
    double smartCharge = 0.0;
 
   if (dumbPhone >= 0) {
       dumbCharge = 0.00;
    }

   if (smartPhone >= 0) {
       smartCharge = smartPhone * 5.00;
    }
    if (tabletPhone >= 0) {
        tabletCharge = tabletPhone * 10.00;
    }
    Charge = dumbCharge + smartCharge + tabletCharge;
    return Charge;
}

double MonthlyCharge ( int talkAndText) {
    double talkAndTextCharge = 0.0;
    if (talkAndText == 0) {
        talkAndTextCharge = 0.00;
    }
    else {
        talkAndTextCharge = 30.00; 
    }
    return talkAndTextCharge;
}

    
int main () {
    cout << DeviceCharge(0, 3, 1) << endl;
    cout << MonthlyCharge(5) << endl;
}
    
