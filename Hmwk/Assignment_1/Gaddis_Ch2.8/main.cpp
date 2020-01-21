/* 
 * File:   main.cpp
 * Author: Amanda Sarenana
 * Created on January 12, 2020, 4:42 PM
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
    double sub_total, tax_rate, total_price;
    
    //Initialize Variables
    double item1Price = 15.95,
            item2Price = 24.95,
            item3Price = 6.95,
            item4Price = 12.95,
            item5Price = 3.95;
    
    //Process or map Inputs to Outputs
    sub_total = item1Price + item2Price + item3Price + item4Price +
            item5Price;
    tax_rate = sub_total*0.07;
    total_price = sub_total + tax_rate;
    
    //Display Outputs
    cout<<"The price of item 1: $"<<item1Price<<endl;
    cout<<"The price of item 2: $"<<item2Price<<endl;
    cout<<"The price of item 3: $"<<item3Price<<endl;
    cout<<"The price of item 4: $"<<item4Price<<endl;
    cout<<"The price of item 5: $"<<item5Price<<endl;
    cout<<"Subtotal: $"<<sub_total<<endl;
    cout<<"Tax: $"<<tax_rate<<endl;
    cout<<"Total: $"<<total_price<<endl;

    //Exit stage right!
    return 0;
}