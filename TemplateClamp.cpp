//Johnston Galan, CSCI 272-02 Assignment 2B
#include <iostream>
using namespace std;

//Declare Function Template to clamp a value
template <typename T>
T clampValue(T value, T low, T high){
    if(value < low){
        return low;
    }
    if(value > high){
        return high;
    }
    return value;
}

int main(){

    //Testing with Int Value
    int intVal = 120;
    cout << "Int: " << intVal << " clamped to [0, 100] -> " << clampValue(intVal, 0, 100) << endl;

    //Testing with double value
    double doubleVal = -3.5;
    cout << "Double: " << doubleVal << " clamped to [0.0, 10.0] -> " << clampValue(doubleVal, 0.0, 10.0) << endl;

    //Testing with Char value
    char charVal = 'z';
    cout << "Char: " << charVal << " clamped to ['a', 'f'] -> " << clampValue(charVal, 'a', 'f') << endl;
}