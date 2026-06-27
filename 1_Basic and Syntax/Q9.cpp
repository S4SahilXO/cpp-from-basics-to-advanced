/*Demonstrate implicit and explicit type casting. Show what happens when you assign
a double to an int (data loss).*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = a;

    double x = 12.75;
    int y = (int)x;

    cout << "Implicit Casting:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    cout << "\nExplicit Casting:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    double num = 25.99;
    int n = num;

    cout << "\nData Loss:" << endl;
    cout << "num = " << num << endl;
    cout << "n = " << n << endl;

    return 0;
}