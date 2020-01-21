/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 17, 2019, 11:38 AM
 * Purpose:  This program is to find sine, cosine, and tangent of an angle. 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI = 4 * atan(1);
const float convRad = PI / 180;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float angD, angR;
    
    //Initialize or input i.e. set variable values
    cout << "Calculate trig functions\n";
    cout << "Input the angle in degrees.\n";
    cin >> angD;
    
    //Map inputs -> outputs
   angR = angD * convRad;
    
    //Display the outputs
    cout << fixed << setprecision(4) << showpoint;
    cout << "sin(" << static_cast<int>(angD) << ") =" << setw(7) << sin(angR) << endl;
    cout << "cos(" << static_cast<int>(angD) << ") ="<< setw(7) << cos(angR) << endl;
    cout << "tan(" << static_cast<int>(angD) << ") =" << setw(7) << tan(angR);
  

    //Exit stage right or left!
    return 0;
}