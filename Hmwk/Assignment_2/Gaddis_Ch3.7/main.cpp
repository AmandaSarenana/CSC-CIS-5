/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 16, 2020, 2:53 PM
 * Purpose:  This program is for a pay increase 
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare variables or constants here
    //7 characters or less
    float oldSal, newSal, retro, mlySal, incSal, nMlySal;
    
    //Initialize or input data here
    const float payInc = .076;
     
    //Display initial conditions, headings here
    cout << "Input previous annual salary.\n"; 
    cin >> oldSal; 
    
    //Process inputs  - map to outputs here
    newSal = (oldSal * payInc) + oldSal; 
    nMlySal = newSal / 12; 
    retro = (oldSal / 2) * payInc;
    
    
    //Format and display outputs here
    cout << setprecision(2) << fixed;
    cout << "Retroactive pay " << setw(6) << " = $" << setw(7) << retro << endl; 
    cout << "New annual salary " << setw(2) << " = $" << setw(7) << newSal << endl; 
    cout << "New monthly salary = $" << setw(7) << nMlySal;  
    
    //Exit stage left
    return 0;
}