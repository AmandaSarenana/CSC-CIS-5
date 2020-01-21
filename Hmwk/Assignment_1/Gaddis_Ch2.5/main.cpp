/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 12, 2020, 1:39 PM
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
    double a = 28, 
            b = 32, 
            c = 37, 
            d = 24, 
            e = 33,
            sum,
            average;
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    sum = a + b + c + d + e;
    average = sum/5;
    
    
    //Display Outputs
    cout<<"The average is: "<<average<<endl;

    //Exit stage right!
    return 0;
}