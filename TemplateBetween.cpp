//Johnston Galan, CSCI 272-02 Assignment 2B
#include <iostream>
using namespace std;

//Declare Function Template to validate student entries
template <typename T>
bool isBetween(T value, T low, T high){
   if(value >= low && value <= high){
    return true;
   }else{
    return false;
   }
}

int main(){

    //Print true/false text instead of 1, 0
    cout << std::boolalpha;
    //Test 1: isBetween (7, 1, 10)
    int val1 = 7, low1 = 1, high1 = 10;
    cout << val1 << " between " << low1 << " and " << high1 << "? " << isBetween(val1, low1, high1) << endl;

    //Test 2: isBetween (12, 1, 10)
    int val2 = 12, low2 = 1, high2 = 10;
    cout << val2 << " between " << low2 << " and " << high2 << "? " << isBetween(val2, low2, high2) << endl;

    //Test 3: isBetween (c, a, f)
    char val3 = 'c', low3 = 'a', high3 = 'f';
    cout << val3 << " between " << low3 << " and " << high3 << "? " << isBetween(val3, low3, high3) << endl;


}