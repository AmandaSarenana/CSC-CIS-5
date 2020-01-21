/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 12, 2020, 3:46 PM
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
    double oceanLevel;
    int fiveYears,
        sevenYears,
        tenYears;
    float after_5,
          after_7,
          after_10;
    
    //Initialize Variables
    oceanLevel=1.5;
    fiveYears=5;
    sevenYears=7;
    tenYears=10;
    
    //Process or map Inputs to Outputs
    after_5=oceanLevel*fiveYears;
    after_7=oceanLevel*sevenYears;
    after_10=oceanLevel*tenYears;
    
    
    //Display Outputs
    cout<<"The ocean's current level is "<<oceanLevel<<" millimeters."<<endl;
    cout<<"The ocean's level will grow "<<after_5;
    cout<<" millimeters after 5 years."<<endl;
    cout<<"The ocean's level will grow "<<after_7;
    cout<<" millimeters after 7 years."<<endl;  
    cout<<"The ocean's level will grow "<<after_10;
    cout<<" millimeters after 10 years."<<endl;

    //Exit stage right!
    return 0;
}