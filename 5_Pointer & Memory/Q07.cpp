/*Create a pointer to a function: write two functions (add, multiply) and call them through a function pointer.
HINT
int (*funcPtr)(int, int) = &add; funcPtr(3, 4);
LOGIC INSIGHT — Function pointers enable callbacks and runtime function selection — foundational for C-style polymorphism.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int add(int a, int b){
    return a+b;
}

int mul(int a, int b){
    return a*b;
}

int main() {
    
    int (*func_ptr)(int, int);

    func_ptr = add;
    cout << "addition = " <<func_ptr(3, 10) << endl;

    func_ptr = mul;
    cout << "multiply = " << func_ptr(3, 10) << endl;
    
    return 0;
}