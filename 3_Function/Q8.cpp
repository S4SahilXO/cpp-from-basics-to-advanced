/*Write an inline function for absolute value. Explain when inline is beneficial and when it's not.
HINT
inline int abs_val(int x) { return x < 0 ? -x : x; }
LOGIC INSIGHT — Inline replaces the function call with its body — eliminates call overhead for tiny functions.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

inline int abs_val(int x){
    return (x<0) ? -x : x;
}

int main() {
    int nums;
    cout << "Enter the nums : ";
    cin >> nums;
    
    cout << abs_val(nums);
    return 0;
}