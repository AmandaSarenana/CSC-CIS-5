/*
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 16, 2019, 12:36 PM
 * Purpose:  This program is to calculate how may calories were consumed by 
    how many cookies were eaten. 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {    
    //Declare Variables
    int bagOfCookies;
    int cookies;
    int servings;
    int perServe;
    int cookiesPerServing;
    double calories;

    //Initialize or input i.e. set variable values
    
    bagOfCookies = 40;
    servings = 10;
    perServe = 300;
    
    //Map inputs -> outputs
    cout << "Calorie Counter\n";
    cout << "How many cookies did you eat?\n";
    cin >> cookies;
    cookiesPerServing = bagOfCookies / servings;
    calories = static_cast < float > (cookies) / cookiesPerServing * perServe; 
    
    //Display the outputs
    cout << "You consumed " << calories << " calories.";
    
    //Exit stage right or left!
    return 0;
}