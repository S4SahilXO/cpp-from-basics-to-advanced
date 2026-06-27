/*Write an overloaded function area() that calculates: area of a circle (1 arg), rectangle
(2 args), triangle (3 args).
HINT
Same function name, different parameter lists
LOGIC INSIGHT — Function overloading: same name, different signatures. Compiler picks the right one at compile time.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#define PI 3.14

using namespace std;

int find_area(int r){
    return PI*(r*r);
}

int find_area(int l, int b){
    return l*b;
}

int find_area(int a, int b, int c){
    int s = (a + b + c)/2;
    int x = s*(s-a)*(s-b)*(s-c);
    return sqrt(x);
}

int main() {
    
    cout << "Area of circle : " << find_area(5) << "\n";
    cout << "Area of Rectangle : " << find_area(8,5) << "\n";
    cout << "Area of triangle : " << find_area(8, 9, 5) << "\n";
    return 0;
}