//Johnston Galan, CSCI 272-02 Assignment 2B
#include <iostream>
#include <iomanip> //needed for setprecision
using namespace std;

//Declare Function Template to calculate total
template <typename T>
T receiptTotal(T amount, T taxPercent, T discountPercent, T tipPercent){
    //Calculate Tax
    T tax = amount * (taxPercent / 100.0);
    //Calculate Discount
    T discount = amount * (discountPercent / 100.0);
    //Calculate Tip
    T tip = amount * (tipPercent / 100.0);

    return amount + tax - discount + tip;
}

int main(){
    //call the function template
    double total = receiptTotal(100.0, 8.875, 10.0, 15.0);

    //Set output format to round 2 decimals
    cout << fixed << setprecision(2);
    cout <<"Final Total: " << total << endl;
}

