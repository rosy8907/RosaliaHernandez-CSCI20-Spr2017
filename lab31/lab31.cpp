// Rosalia Hernandez
// 23 March 2017
// This program will simulate a phone company's process for calculating the charge for their service.

#include <iostream>
using namespace std;


double DeviceCharge (int dumbPhone, int smartPhone, int tabletPhone){           //device charge per kind of phone
    double Charge = 0.0;                                                        
    double dumbCharge = 0.0;
    double tabletCharge = 0.0;
    double smartCharge = 0.0;
 
   if (dumbPhone >= 0) {                                                        //no charge for dumb phones
       dumbCharge = 0.00;
    }

   if (smartPhone >= 0) {                                                       //$5 charge per smart phone
       smartCharge = smartPhone * 5.00;
    }
    if (tabletPhone >= 0) {                                                     //$10 charge per tablet
        tabletCharge = tabletPhone * 10.00;
    }
    Charge = dumbCharge + smartCharge + tabletCharge;
    return Charge;
}

double MonthlyCharge ( int talkAndText) {                                       //$30 charge for talk and text
    double talkAndTextCharge = 0.0;
    if (talkAndText == 0) {
        talkAndTextCharge = 0.00;
    }
    else {
        talkAndTextCharge = 30.00; 
    }
    return talkAndTextCharge;
}

double DataPackage (int UnlmtdData, int addData = 0){                           
    int dataCharge = 0;
    int chargeUp5 = 0;
    int chargeUp15 = 0;
    
    if (UnlmtdData == 1) {                                                      //$75 charge for unlimited talk text and data up to 10GB(and):
        dataCharge = 75.00 + (addData * 1.5);                                   //addition $1.5 per GB after 10GB 
    }
    if ((UnlmtdData == 0) && (addData == 1)) {                                  //no unlimited talk text and data (and):
        dataCharge = 5.00 ;                                                     //$5 for 1GB
    }
    if ((UnlmtdData == 0) && (addData > 1) && (addData < 6)){
        chargeUp5 = 0.75 * addData;                                             //$0.75 per GB after 1GB up to 5GB
        dataCharge = 5.00 + chargeUp5;
    }
    if ((UnlmtdData == 0) && (addData > 5) && (addData < 16)) {                 //$1.5 per GB after 5GB up to 15GB
        chargeUp5 = 0.75 * 5;
        chargeUp15 = 1.50 * (addData - 5);
        dataCharge = 5.00 + chargeUp15 + chargeUp5;
    }
    if ((UnlmtdData == 0) && (addData > 15)) {                                  //$3 per GB after 15GB 
        chargeUp5 = 0.75 * 5;
        chargeUp15 = 1.5 * 10;
        addData = addData - 15;
        dataCharge = 5.00 + chargeUp15 + chargeUp5 + (3*addData);
    }
    
    return dataCharge;
    
}
    
int main () {                                                                   //variables to hold user input and calculations
    int dumb = 0;
    int smart = 0;
    int tablet = 0;
    int talkNText = 0;
    int data1 = 0;
    int addGB = 0;
    int totalDue = 0;
    int corporate = 0;
    
    cout << "How many dumb phones do you have?" << endl;
    cin >> dumb;                                                                //user input how many dumb phones
    cout << "How many smart phones do you have?" << endl;
    cin >> smart;                                                               //user input how many smart phones
    cout << "How many tablets do you have?" << endl;
    cin >> tablet;                                                              //user input how many tablets
    cout << "Do you use data? Or only talk and text?" << endl;
    cout << "Press 1 if you use data, press 0 if not." << endl;
    cin >> talkNText;                                                           //user input talk and text
    cout << "How much data do you use? In GB?" << endl;
    cin >> addGB;                                                               //user input talk text and data
    cout << "Are you a corporate employee? 1 for yes, 0 for no" << endl;
    cin >> corporate;
    cout <<endl;
    cout << endl;
    cout << "Overview:" << endl;
    cout << "You have " << dumb << " dumbphones, " << smart << " smartphones, and " << tablet << " tablets." << endl; 
    
    totalDue = DeviceCharge(dumb, smart, tablet) + MonthlyCharge(talkNText) + DataPackage(data1, addGB); //calculation of total service charge
    
    
    if (corporate == 1) {                                                       //adjusts monthly total with corporate discount of 10% off.
        int discount = totalDue / 10;
        totalDue = totalDue - discount;
        cout << "Congratulations! You will get your corporate discount of $" << discount << endl;
        cout << "Your monthly amount due after your discount will be $" << totalDue << endl;
        cout << endl;
        
    }
   
    if (((smart + dumb) > 2) && (corporate == 0)) {                                                  //if they qualify for a family discount
        int discount = 0;                                                       //$3 discount per phone over 2
        cout << "Congratulations! You qualify for a Family Plan Discount!" << endl;
        discount = ((smart + dumb) - 2) * 3;
        totalDue = totalDue - discount;
        cout << "You will save $" << discount << endl;
        cout << "You're monthly amount due will be $" << totalDue << "." <<endl;    //new total service charge after discount
    }  
    
    
    
    

    
}
    
