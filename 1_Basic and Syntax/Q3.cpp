/* Write a program that takes two integers from the user and prints their sum,
difference, product, quotient, and remainder.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int add(int a, int b){
    return a+b;
}

int diff(int a, int b){
    return a-b;
}

int product(int a, int b){
    return a*b;
}

int quotient(int a, int b){
    return a/b;
}

int remainder(int a, int b){
    return a%b;
}


int main() {
    int a, b;
    cout << "enter the first number : ";
    cin >> a;
    cout << "enter the second number : ";
    cin >> b;


    cout << "output : " << add(a, b) << "\n";
    cout << "output : " << diff(a, b) << "\n";
    cout << "output : " << product(a, b) << "\n" ;
    cout << "output : " << quotient(a, b) << "\n" ;
    cout << "output : " << remainder(a, b);
    return 0;
}