/*Demonstrate pass-by-value vs pass-by-reference. Write swap() functions both ways
and show which actually modifies the originals.
HINT
By-ref: void swap(int &a;, int &b;)
LOGIC INSIGHT — Pass-by-value copies — original untouched. Pass-by-reference passes the actual variable — changes persist.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void pass_by_value(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void pass_by_reference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    x = 10;
    y = 20;

    // pass_by_value(x,y);
    pass_by_reference(x, y);

    cout << "x : " << x << "\n";
    cout << "y : " << y << "\n"; 

    return 0;
}