/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 17, 2019, 10:36 AM
 * Purpose:  This program converts Fahrenheit to Celsius.
 */

//System Libraries
#include <iostream>
#include <iomanip>
//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float cent, fahr;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Temperature Converter\n";
    cout << "Input Degrees Fahrenheit" <<endl;
    cin >> fahr;
    cent = (5/9.0)*(fahr-32) ;
    
    //Display the outputs
    cout << setprecision(1) << fixed;
    cout << fahr << " Degrees Fahrenheit = " << cent;
    cout << " Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}