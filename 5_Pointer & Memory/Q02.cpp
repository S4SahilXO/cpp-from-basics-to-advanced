/*Write a swap function using pointers (not references). Demonstrate that the original
values change.
HINT
void swap(int* a, int* b) — use *a and *b to access values
LOGIC INSIGHT — Passing a pointer gives the function access to the original variable via its address*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void swapping(int *a, int *b){
    cout << "Before swapping\n";
    cout << "Value of a : " << *a <<"\n";
    cout << "Value of b : " << *b <<"\n";
    swap(a,b); // if we use swap(*a, *b) then outside function - value of a and b gets changed not address.
    cout << "After swapping\n";
    cout << "Value of a : " << *a <<"\n";
    cout << "Value of b : " << *b <<"\n";
}

int main() {
    int a =5;
    int b = 7;

    swapping(&a, &b);
    cout <<"Original " <<"Value of a :- " << a << " and "<< "b :- " << b;
    
    return 0;
}