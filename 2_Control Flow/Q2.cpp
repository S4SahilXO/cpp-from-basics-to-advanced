/*Build a simple calculator using switch-case that supports +, -, *, / operations on two
numbers.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    double a,b;
    char op;
    cout << "Enter the value of a : ";
    cin >> a;

    cout << "Enter the operation you want to perform '+', '-', '*', '/' : ";
    cin >> op;

    cout << "Enter the value of b : ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << "Result = " << a + b;
        break;

    case '-':
        cout << "Result = " << a - b;
        break;

    case '*':
        cout << "Result = " << a * b;
        break;

    case '/':
        cout << "Result = " << a / b;
        break;
    
    default:
        cout << "Invalid Operator";
    }
    
    return 0;
}