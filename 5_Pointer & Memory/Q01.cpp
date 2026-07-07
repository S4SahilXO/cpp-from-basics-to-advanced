/* Declare a pointer to an int, assign it an address using &, print the value and the address. Explain * and & operators.
HINT:-
int x = 10; int* ptr = &x; *ptr = 20;
LOGIC INSIGHT — & = address-of operator. * = dereference (get value at address). Pointer = variable that stores an address.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    int x = 5;
    int *ptr = &x;
    *ptr = 10;

    cout << *ptr << endl; // prints the value at the address stored in ptr, which is 10
    cout << ptr << endl; // prints the address of x, which is stored in ptr
    
    return 0;
}