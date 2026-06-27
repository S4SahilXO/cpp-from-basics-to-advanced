/*Write a program that swaps two variables: 
(a) using a temp variable, 
(b) without a temp variable using arithmetic, 
(c) using XOR.
HINT XOR swap: a^=b; b^=a; a^=b;
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void with_temp(int a, int b){
    cout <<"Before Swap " << "a: " << a << " and "<<"b: "<< b << "\n";
    int c;
    c = a;
    a = b;
    b = c;
    cout <<"After swap with temp variable " << "a: "<< a << " and " << "b: " << b << "\n";
}

void without_temp(int a, int b){
    cout <<"Before Swap " << "a: " << a << " and "<<"b: "<< b << "\n";
    a = a + b;
    b = a - b;
    a = a - b;
    cout <<"After swap without temp variable " << "a: "<< a << " and " << "b: " << b << "\n"; 
}

void xor_swap(int a , int b){
    cout <<"Before Swap " << "a: " << a << " and "<<"b: "<< b << "\n";
    a ^= b;
    b ^= a;
    a ^= b;
    cout <<"After swap by using xor " << "a: "<< a << " and " << "b: " << b << "\n";
}

int main() {
    
    int a, b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    with_temp(a,b);
    without_temp(a,b);
    xor_swap(a,b);
    
    return 0;
}