// Rosalia Hernandez
// 13 April 2017
// This program mimicks an online shopping experience. It keeps track of inventory and the total of the shopper.

#include <iostream>
#include <string>
using namespace std;

int main () {
    const int CONST_NUM = 10;                                                   //size of each array will be the same
    string productName[CONST_NUM];
    double productCost[CONST_NUM];
    int productInventory[CONST_NUM];
    string listNumber[CONST_NUM];
    int listNum = 0;
    int wantNum = 0;
    double totalAmount = 0.0;
    double itemCost = 0.0;
    int takeHome = 0;
    bool keepShopping = true;
    
    listNumber [0] = "1. ";                                                     //array that helps the user identify what they want to buy
    listNumber [1] = "2. ";
    listNumber [2] = "3. ";
    listNumber [3] = "4. ";
    listNumber [4] = "5. ";
    listNumber [5] = "6. ";
    listNumber [6] = "7. ";
    listNumber [7] = "8. ";
    listNumber [8] = "9. ";
    listNumber [9] = "10. ";

    productName [0] = "Peach    ";                                              //the array that stores the name of what the user wants to buy
    productName [1] = "Banana   ";
    productName [2] = "Pear     ";
    productName [3] = "Starfruit";
    productName [4] = "Apple    ";
    productName [5] = "Mango    ";
    productName [6] = "Cherry   ";
    productName [7] = "Strawberry";
    productName [8] = "Raspberry";
    productName [9] = "Blueberry";

    productCost [0] = 0.50;                                                     //array that stores the cost per items
    productCost [1] = 0.60;
    productCost [2] = 0.40;
    productCost [3] = 1.00;
    productCost [4] = 0.80;
    productCost [5] = 1.75;
    productCost [6] = 0.75;
    productCost [7] = 0.65;
    productCost [8] = 1.75;
    productCost [9] = 0.50;

    productInventory [0] = 5;                                                   //array that keeps the inventory of each of our products
    productInventory [1] = 6;
    productInventory [2] = 9;
    productInventory [3] = 3;
    productInventory [4] = 5;
    productInventory [5] = 9;
    productInventory [6] = 6;
    productInventory [7] = 9;
    productInventory [8] = 6;
    productInventory [9] = 5;
    
    

    
    for (int i = 0; i < CONST_NUM; i ++) {                              //lists the arrays with their corresponding array partners, makes the list flow
        cout << listNumber [i] << productName[i] << "    $" ;
        cout << productCost[i] << " each " << endl;
        
    }
    
    while (keepShopping == true ) {                                     //use a boolean to keep shopping or to exit shopping and get the total
    
    cout << "Pick an item by entering which number it is on the list or 0 to exit." << endl;
    cin >> listNum;                                                     //takes user input to put in the location of the array
    
    listNum = listNum - 1;                                              //subtracts one to get the correct location because arrays start at 0
    if (listNum < 0) {                                                  //if the location is less than 0 then the boolean turns to false
         keepShopping = !true;                                          //takes the user to checkout
    }
    if (productInventory[listNum] == 0) {                               //if there is no product left the user must choose a different item or exit the shopping experience
            cout << "Sorry, we are out! Choose a new item or 0 to exit." << endl;
            cin >> listNum;                                             //a chance to choose another item
            listNum = listNum - 1;
            if (listNum < 0) {                                          //if the user chooses to exit this will turn the boolean false and take the user to checkout
                keepShopping = !true;
            }
    }
    
     
    if (listNum >= 0) {                                                 //asks the user how many of the same item they want, this helps us keep track of inventory
    cout << "How many would you like? We have " << productInventory[listNum] << " in stock." << endl;
    cin >> wantNum;}
    
    
    
    if (wantNum > productInventory[listNum]) {                          //if they want more than what we have it will ask the user if they want all that we have 
        cout << "We only have " << productInventory[listNum] << ". Would you like them?" << endl;
        cout << "Press 1 for yes, 0 for no." << endl;
        cin >> takeHome;
            if (takeHome == 1) {                                        //if they want all that we have this takes the inventory to 0.
                productInventory[listNum] = 0;
            }
            else {
                productInventory[listNum] = productInventory[listNum];  //if they dont, this will do nothing to the inventory, it will stay the same
            }
    }
    if (wantNum <= productInventory[listNum]) {
        productInventory[listNum] = productInventory[listNum] - wantNum;
        
    }
    
    itemCost = productCost[listNum] * wantNum;                          //the cost is calculated by how many items they want times the value stored in the array at that list number
    totalAmount = totalAmount + itemCost; }                             //adds the cost of the item to the total bill to revieve at checkout
    
    if (keepShopping == !true) {                                        //if the boolean turns false, this shows the total at checkout

    cout << "Your cart total is $" << totalAmount << endl;
    cout << "Thank you for shopping with us." << endl;
    
    }
    
    
    

      
 
    
}