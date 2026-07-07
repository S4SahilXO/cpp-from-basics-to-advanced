/*Demonstrate pointer arithmetic: declare an array, use a pointer to traverse it (ptr++),
and show pointer subtraction.
HINT
int* ptr = arr; *(ptr+2) is arr[2]; ptr++ advances by sizeof(int) bytes
LOGIC INSIGHT — ptr++ advances by the size of the pointed-to type — not just 1 byte. Arrays and pointers are
deeply connected.*/

#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr = arr;

    cout << "Pointer traversal:\n";

    for (int i = 0; i < 5; i++) {
        cout << *ptr << " ";
        ptr++;
    }

    cout << endl;

    ptr = arr;

    cout << "\nThird element using *(ptr + 2): ";
    cout << *(ptr + 2) << endl;

    int *p1 = &arr[1];
    int *p2 = &arr[4];

    cout << "\nPointer subtraction: ";
    cout << p2 - p1 << endl;

    return 0;
}