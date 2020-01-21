/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 16, 2019, 9:36 PM
 * Purpose:  This program is for calculating the minimum amount of insurance
 *      that should be purchased for the property. 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    double replacementCost, minimumAmount;
    
    //Initialize or input i.e. set variable values
    cout << "Insurance Calculator";
   
    //Map inputs -> outputs
    cout << "\nHow much is your house worth?";
    cin >> replacementCost;
    minimumAmount = (replacementCost * 0.8);
    
    //Display the outputs
    cout << "\nYou need $" << minimumAmount << " of insurance.";

    //Exit stage right or left!
    return 0;
}