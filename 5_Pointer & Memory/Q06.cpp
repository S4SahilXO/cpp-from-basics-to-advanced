/*Write a function that returns a dynamically allocated string (char*). The caller must
free it. Demonstrate proper usage.
HINT
Allocate with new char[len+1], copy, return pointer. Caller calls delete[]
LOGIC INSIGHT — Ownership principle: whoever allocates is responsible for freeing. This is the root of many bugs.*/

#include <iostream>
using namespace std;

char* createString() {

    const char text[] = "Hello";

    int len = 5;

    char *str = new char[len + 1];

    for(int i = 0; i <= len; i++) {
        str[i] = text[i];
    }

    return str;
}

int main() {

    char *ptr = createString();

    cout << ptr << endl;

    delete[] ptr;

    return 0;
}