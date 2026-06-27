/*Write a program that reads a number and prints whether it is positive, negative, or
zero using if-else-if.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    int x;
    cout << "Enter any number : ";
    cin >> x;

    if(x>0){
        cout << "Positive";
    }else if (x<0){
        cout << "Negative";
    }else{
        cout << "Zero";
    }
    
    return 0;
}