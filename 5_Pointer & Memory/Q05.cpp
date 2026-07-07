/*Explain and demonstrate the difference between const int* ptr, int* const ptr, and
const int* const ptr.
HINT
Read right-to-left: 'ptr is a const pointer to int' vs 'ptr is a pointer to
const int'
LOGIC INSIGHT — const placement changes what's immutable: the pointer itself, or the data it points to, or both.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    int x=5;
    int y=7;

    const int *ptr1 = &x;
    // *ptr1 = 90; can't modified because of const int
    cout << "Before assigning: " << ptr1<< "\n";
    ptr1=&y;
    cout << "pointer to const data - after assigning: " << ptr1 << "\n";

    int *const ptr2 = &x;
    // ptr2 = &y; nope 
    cout << "Before assigning: " << *ptr2 << "\n"; 
    *ptr2= 90;
    cout << "constant pointer to int - after assigning: " << *ptr2 << "\n"; 

    const int *const ptr3 = &x;

    // const pointer to const data here we can't do both because of constant
    // *ptr3 = 101;
    // ptr3= &y
    return 0;
}