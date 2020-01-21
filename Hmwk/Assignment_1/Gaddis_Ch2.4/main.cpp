/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 12, 2020, 12:23 PM
 * Purpose:  C++ Template to be copied and utilized
 * for homework, projects, exams!
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    double mealCharge, tax, tip, totalBill;
    
    //Initialize Variables
    mealCharge=88.67;
    
    //Process or map Inputs to Outputs
    tax=(mealCharge*6.75)/100;
    tip=20*(mealCharge+tax)/100;
    totalBill=mealCharge+tax+tip;
    
    //Display Outputs
    cout<<"\nMeal cost: $"<<mealCharge;
    cout<<"\nTax amount: $"<<tax;
    cout<<"\nTip amount: $"<<tip;
    cout<<"\nTotal bill: $"<<totalBill<<endl;

    //Exit stage right!
    return 0;
}