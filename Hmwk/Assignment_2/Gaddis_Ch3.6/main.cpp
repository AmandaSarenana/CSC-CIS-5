/* 
 * File: main.cpp
 * Author: Amanda Sarenana
 * Created on January 17, 2020, 12:57 PM
 * Purpose: Program is to find the lethal dose of diet soda.
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
//Set random number seed here when needed

//Declare variables or constants here
float dWeight, msMouse, msChem, msSoda;
float concen;
int totalC;
const float soda = (45359.2)/100;

//Initialize Variables
cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
cout << "Input the desired dieters weight in lbs.\n";
cin >> dWeight;
msMouse = 35;
msChem = 5;
msSoda = 350;
concen = 1e-3f;

//Process or map Inputs to Outputs
totalC = dWeight*soda*msChem/(msMouse*msSoda*concen);

//Display Outputs
cout<<"The maximum number of soda pop cans" << endl << "which can be consumed is " << totalC << " cans";

//Exit stage left
return 0;
}