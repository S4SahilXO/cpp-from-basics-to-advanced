/*Implement a function that uses static local variables to count how many times it has
been called, without global variables.
HINT
static int count = 0; inside the function body
LOGIC INSIGHT — Static local vars are initialized once and persist across calls — local scope but program lifetime.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void call_count(){
    static int count = 0;
    count ++;

    cout << "Function call " << count << " times" << endl;
}

int main() {
    
    call_count();
    call_count();
    call_count();
    
    return 0;
}