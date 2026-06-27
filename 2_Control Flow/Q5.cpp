/*Print the following pattern using nested loops: 
*
**
***
****
*****
HINT
Outer loop: rows; inner loop: print '*' i times
LOGIC INSIGHT — Nested loops build 2D patterns. Outer = rows, inner = columns. Think in terms of coordinates.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    int rows = 5;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}