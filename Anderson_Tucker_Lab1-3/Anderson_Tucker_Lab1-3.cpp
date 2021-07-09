//============================================================================
// Name        : Lab1-3.cpp
// Author      : Makayla Anderson-Tucker
// Date         : July 5th 2021
// Course       : CS-260 X6351 EW6
// Version     : 1.0
// Copyright   : Copyright © 2017 SNHU COCE
// Description : Lab 1-3 Up to Speed in C++
//============================================================================

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

//============================================================================
// Global definitions visible to all methods and classes
//============================================================================

// FIXME (1): Define a data structure to hold bid information together as a single unit of storage.
struct Auction {

    string title; // will hold the the name of the title
    string fund; // will hold the type of fund
    string vehicle; //will hold the type of vehicle
    float amount; //will hold the dollar amount

};

// FIXME (4): Display the bid values passed in data structure
/**
 * Display the bid information
 *
 * @param Auction data structure containing the bid info
 */

//This function will display the bid information using the the Auction struct
void displayBid(Auction auction) {
    cout << "Title: " << auction.title << endl;
    cout << "Fund: " << auction.fund << endl;
    cout << "Vehicle: " << auction.vehicle << endl;
    cout << "Bid Amount: " << auction.amount << endl;

    return;
}
/**
 * Simple C function to convert a string to a double
 * after stripping out unwanted char
 *
 * credit: http://stackoverflow.com/a/24875936
 *
 * @param ch The character to strip out
 */
double strToDouble(string str, char ch) {
    str.erase(remove(str.begin(), str.end(), ch), str.end());
    return atof(str.c_str());
}

// FIXME (3): Store input values in data structure
/**
 * Prompt user for bid information
 *
 * @return data structure containing the bid info
 */

//This function will use the Auction struct to get and store information in the auction struct variable
Auction getBid() {
    Auction auction;

    cout << "Enter title: ";
    cin.ignore();
    getline(cin, auction.title); //User enters the title

    cout << "Enter fund: ";
    cin >> auction.fund; //User enters the type of fund

    cout << "Enter vehicle: ";
    cin.ignore();
    getline(cin, auction.vehicle); //user enters the type of vehicle

    cout << "Enter amount: ";
    cin.ignore();
    string strAmount;
    getline(cin, strAmount); //user enters the amount
    auction.amount = strToDouble(strAmount, '$'); //This stores the dollar amount with the currency symbol

    return auction;
}



/**
 * The one and only main() method
 */
int main() {

    // FIXME (2): Declare instance of data structure to hold bid information
    Auction auction;
    auction.title;// will hold the the name of the title
    auction.fund;// will hold the type of fund
    auction.vehicle;//will hold the type of vehicle
    auction.amount;//will hold the dollar amount

   
    // loop to display menu until exit chosen
    int choice = 0;
    while (choice != 9) {
        cout << "Menu:" << endl;
        cout << "  1. Enter Bid" << endl;
        cout << "  2. Display Bid" << endl;
        cout << "  9. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        // FIXME (5): Complete the method calls then test the program
        switch (choice) {

            //Will prompt user to enter all bid information and will be stored in auction struct
        case 1:
            auction = getBid();
            break;
            
            //will display all bid information stored in the auction struct
        case 2:
            displayBid(auction);
            break; 
            
            // will end the program
        case 9: 
            break;
        }
    }

    cout << "Good bye." << endl;

    return 0;
}
