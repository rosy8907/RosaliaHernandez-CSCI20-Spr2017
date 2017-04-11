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
double DataPackage (int dataGB) {                                               //data only, no talk and text
    double dataCharge = 0.0;
    int lessData = 0;
    
    if (dataGB  == 1) {                                                         //1GB for $5.00
        dataCharge = 5.00;
    }
    if ((dataGB > 1) && (dataGB < 7)){                                           //5GB's for $.75 each
        dataCharge = 5.00 + (0.75 * dataGB);
    }
    if ((dataGB > 6) && (dataGB < 22 )){
        dataGB = dataGB - 6;
        dataCharge = 5.00 + (0.75 * 5) + (1.50 * dataGB);                       //15GB's for $1.5 each
    }
    if (dataGB > 21) {
        dataGB = dataGB - 21;
        dataCharge = 5.00 + (0.75 * 5) + (1.50 * 15) + (3.00 * dataGB);         //$3 for GB afterwards
    }
}

double UnlimitedDataPackage (int dataGB) {                                      //Unlimited talk text AND data
    double dataCharge = 0;
    if (dataGB <= 10) {                                                         //$75 for up to 10GB
        dataCharge = 75.00;
    }
    if (dataGB > 10) {                                                          //%1.50 per GB after 10GB's
        dataGB = dataGB - 10;
        dataCharge = 75.00 + (1.50 * dataGB );
    }
}

int main () {
    int numSmart = 0;
    int numDumb = 0;
    int numTablet = 0;
    int numDevices = 0;
    int talkAndText = 0;
    int dataUsage = 0;
    int corporate = 0;
    double discount = 0.00;
    double bestPlan = 0.0;
    double serviceAmount = 0.0;
    
    cout << "How many dumbphones do you have?" << endl;
    cin >> numDumb;
    cout << "How many smartphones do you have?" << endl;
    cin >> numSmart;
    cout << "How many tablets do you have?" << endl;
    cin >> numTablet;
    cout << "Do you use them to talk and text?" << endl;
    cout << "Press 1 for yes, or 0 for no." << endl;
    cin >> talkAndText;
    cout << "How many GB of data do you use?" << endl; 
    cin >> dataUsage;
    cout << "Are you a corporate employee?" << endl;
    cout << "Press 1 for yes, or 0 for no." << endl;
    cin >> corporate;
    
    
    numDevices = numDumb + numSmart + numTablet;
    
    
    if ((talkAndText == 1) && (dataUsage == 0)) {                               //$30 for only talk and text no data.
        cout << "You would get the Unlimited Talk and Text Package at $30." << endl;
        bestPlan = 30.00;
    }
    if ((talkAndText == 0) && (dataUsage > 0)) {
        cout << "You would pay for data individually at set rates." << endl;
        bestPlan = DataPackage (dataUsage);
    }
    if ((talkAndText == 1) && (dataUsage > 0)) {
        cout << "You would get the Unlimited Talk Text and Data Package starting at $75" << endl;
        cout << "with increments for data over 10GB's." << endl;
        bestPlan = UnlimitedDataPackage (dataUsage);
    }
    
    serviceAmount = bestPlan + DeviceCharge (numDumb, numSmart, numTablet);
    
    if (corporate == 1) {                                                       //corporate discount 10% off
        cout << "You get the 10 percent off corporate discount" << endl;
        discount = serviceAmount/10;
        serviceAmount = serviceAmount - discount;
    }
    if (numDevices > 2) {                                                       //Family Plan Discount 3$ off 
        cout << "You get a Family Plan discount of $3 off per device after 2 devices" << endl;
        numDevices = numDevices - 2;
        discount = numDevices * 3.00;
        serviceAmount = serviceAmount - discount;
    }
    
    cout << "After the device charge, You're total monthly amount would be $" << serviceAmount << endl;
    
    
}