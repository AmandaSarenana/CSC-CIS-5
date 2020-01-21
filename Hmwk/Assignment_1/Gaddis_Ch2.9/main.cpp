/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 12, 2020, 5:06 PM
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
    char letter;
    int number;
    float decimal;
    double another_decimal;
    
    //Initialize Variables
    letter = sizeof(letter);
    number = sizeof(number);
    decimal = sizeof(decimal);
    another_decimal = sizeof(another_decimal);
    
    //Process or map Inputs to Outputs
    cout << "A char uses "<<letter<< " bytes of memory on any computer."<<endl;
    cout << "An int uses "<<number<< " bytes of memory on any computer."<<endl;
    cout << "A float uses "<<decimal<< " bytes of memory on any computer."<<endl;
    cout << "A double uses "<<another_decimal<< " bytes of memory on any "
            "computer."<<endl;
    
    //Display Outputs

    //Exit stage right!
    return 0;
}