/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 16, 2020, 4:23 PM
 * Purpose:  This program is able to input test scores and find the average of 
 * those test scoress.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    double testScore1, testScore2, testScore3, testScore4, testScore5;
    double average;
    
    //Initialize Variables
    cout << "Input 5 numbers to average.";
    cin >> testScore1 >> testScore2 >> testScore3 >> testScore4 >> testScore5;
    
    
    //Process or map Inputs to Outputs
    average=(testScore1 + testScore2 + testScore3 + testScore4 + 
            testScore5)/5;
    
    //Display Outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"\nThe average = "<<average;

    //Exit stage right!
    return 0;
}