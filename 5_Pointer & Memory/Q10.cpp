/*Use a void* pointer as a generic container. Store an int and a double, cast back with reinterpret_cast and print.
HINT
void* vp = &x; int* ip = reinterpret_cast(vp);
LOGIC INSIGHT — void* loses type info — you must cast back to the correct type. Wrong cast = undefined behavior.*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x = 10;
    void* vp = &x;

    // cout << *vp; // give an compiler error

    //re-cast
    int* ip = reinterpret_cast<int*>(vp);

    cout << *ip;

    // but if we do a wrong casting then it give an error undefined behaviour

    // double* ip = reinterpret_cast<double*>(vp);
    // cout << *ip; //undefined behaviour

    return 0;
}