/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 12, 2020, 8:13 PM
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
    double milesTraveled, gallonsOfGasUsed, MPG;
    
    //Initialize Variables
    milesTraveled = 350;
    gallonsOfGasUsed = 12;
    
    //Process or map Inputs to Outputs
    MPG = milesTraveled / gallonsOfGasUsed;
    
    //Display Outputs
    cout << "Number of miles traveled: "<<milesTraveled<<endl;
    cout << "Number of gallons of gas used: "<<gallonsOfGasUsed<<endl;
    cout << " Number of miles per gallon (MPG) traveled by car: "<<MPG<<endl;

    //Exit stage right!
    return 0;
}