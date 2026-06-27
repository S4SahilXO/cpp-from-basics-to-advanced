/*Write a function template max_val that returns the larger of two values. Test it with
int, double, and char.
HINT
template T max_val(T a, T b)
LOGIC INSIGHT — Function templates generate code for each type used — one definition, many instantiations.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template <typename T>
T max_val(T a, T b){
    return max(a,b);
}

int main() {
    
    cout << max_val<int>(5,3) << "\n";
    cout << max_val<double>(2.7789, 6.7789) << "\n";
    cout << max_val<char>('A', 'Z') << "\n";
    
    return 0;
}