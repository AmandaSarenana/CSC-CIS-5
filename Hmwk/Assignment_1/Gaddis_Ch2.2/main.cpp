/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 12, 2020, 12:52 AM
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
    float totalPercent = .58, totalSales = 8.6, easttotal;
      
    //Initialize Variables
    
    
    //Process or map Inputs to Outputs
    easttotal=(totalPercent*totalSales);
    
    //Display Outputs
    cout<<"Total sale company: "<<totalSales<<" million";
    cout<<"\nPercentage is sale generate by east coast division: " <<totalPercent;
    cout<<"\nTotal sale generate by east coast division: "<<easttotal<<"million"<< endl;
    
    //Exit stage right!
    return 0;
}