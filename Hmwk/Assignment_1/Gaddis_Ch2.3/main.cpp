/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 12, 2020, 1:50 AM
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
    float state_Tax, country_Tax, totalSalesTax, purchase=95;
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    state_Tax=0.04*purchase;
    country_Tax=0.02*purchase;
    totalSalesTax=state_Tax + country_Tax;
    
    //Display Outputs
    cout << "Total Sales Tax on a $95: $"<<totalSalesTax<<endl;
    
    //Exit stage right!
    return 0;
}