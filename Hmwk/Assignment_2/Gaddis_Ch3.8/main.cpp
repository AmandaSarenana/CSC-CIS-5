/* 
 * File: main.cpp
 * Author: Amanda Sarenana
 * Date: January 17, 2020, 4:57 PM
 * Purpose: This program tells how many people must be excluded
        in order to meeet fire regulations.
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
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
    int number, roomCap, diff;

    cout << "Input the maximum room capacity and the number of people\n";
    cin >> roomCap >> number;
    
     if (number <= roomCap){
    cout << "You can hold the meeting legally!\n";
    }

    if (number > roomCap){
    diff = number - roomCap;
    cout << "Meeting cannot be held.\n";
    cout << "Reduce number of people by " << diff << " to avoid fire violation.";
    }
    
    
    //Exit stage left
    return 0;
}