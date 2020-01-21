/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 12, 2020, 1:40 PM
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
    double pay_amount,pay_periods, annual_pay;
    
    //Initialize Variables
    pay_amount = 2200.0;
    pay_periods = 26;
    
    //Process or map Inputs to Outputs
    annual_pay = pay_amount * pay_periods;
    
    //Display Outputs
    cout<<"The annual pay is: $"<<annual_pay<<endl;
    
    //Exit stage right!
    return 0;
}