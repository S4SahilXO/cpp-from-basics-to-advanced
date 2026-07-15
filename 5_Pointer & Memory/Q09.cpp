/*Explain what a dangling pointer and memory leak are. Write code that creates both,
then fix them.
HINT
Dangling: delete ptr then use *ptr. Leak: allocate, go out of scope without
delete
LOGIC INSIGHT — Dangling pointer = undefined behavior (crash). Memory leak = resource not returned to OS.*/

#include <iostream>
#include <algorithm>
using namespace std;

/*
A dangling pointer is a pointer that still holds the address of memory that has already been deleted. Dereferencing it causes undefined behavior.

A memory leak happens when dynamically allocated memory is not deleted, so the memory cannot be reused until the program ends.
*/

int main() {

    int* danglingPointer = new int(10);
    delete danglingPointer;

    // cout << *danglingPointer;  // Undefined behavior: dangling pointer

    danglingPointer = nullptr;

    int* memoryLeakPointer = new int(20);

    // If delete memoryLeakPointer; were missing, this would be a memory leak.
    delete memoryLeakPointer;
    memoryLeakPointer = nullptr;

    return 0;
}