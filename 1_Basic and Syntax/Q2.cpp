/* Declare variables of types int, float, double, char, bool, and string. Print each with its
type name*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <typeinfo>

using namespace std;

int main() {
    
    int i = 15;
    float f = 5.4451256f;
    double d = 5.55465465132321654684321;
    char c = 'a';
    bool b = true;
    string s = "sahil";

    cout << "The value of i is " << i << " but the type is " << typeid(i).name() << "\n";
    cout << "The value of f is " << f << " but the type is " << typeid(f).name() << "\n";
    cout << "The value of d is " << d << " but the type is " << typeid(d).name() << "\n";
    cout << "The value of c is " << c << " but the type is " << typeid(c).name() << "\n";
    cout << "The value of b is " << b << " but the type is " << typeid(b).name() << "\n";
    cout << "The value of s is " << s << " but the type is " <<typeid(s).name();

    
    return 0;
}