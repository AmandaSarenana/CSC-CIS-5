/* 
 * File: main.cpp
 * Author: Amanda Sarenana
 * Date: January 18, 2020, 6:10 PM
 * Purpose: This program is to calculate the sum of all positive and 
 *          non-positive numbers and the average of all numbers entered.
 * Version:
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
    float number;
    float sum, negSum, posSum;
    
    //Initialize or input data here
    sum=negSum=posSum=0;
    
   //Process inputs  - map to outputs here
    cout << "Input 10 numbers, any order, positive or negative\n";
    cin >> number;
    number > 0? posSum += number : negSum += number;
    
    cin >> number;
    number > 0? posSum += number : negSum += number;
    
    cin >> number;
    number > 0? posSum += number : negSum += number;
    
    cin >> number;
    number > 0? posSum += number : negSum += number;
    
    cin >> number;
    number > 0? posSum += number : negSum += number;
    
    cin >> number;
    number > 0? posSum += number : negSum += number;
    
    cin >> number;
    number > 0? posSum += number : negSum += number;
    
    cin >> number;
    number > 0? posSum += number : negSum += number;
    
    cin >> number;
    number > 0? posSum += number : negSum += number;
    
    cin >> number;
    number > 0? posSum += number : negSum += number;
    
    //Format and display outputs here
    cout << "Negative sum = " << setw(3) << negSum << endl;
    cout << "Positive sum = " << setw(3) << posSum << endl;
    cout << "Total sum " << setw(5) << " = "  << setw(3) << sum;
    
    //Exit stage left
    return 0;
}