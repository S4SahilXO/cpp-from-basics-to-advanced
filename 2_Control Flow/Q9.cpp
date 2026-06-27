/*Write nested loops to generate the multiplication table (1-10 × 1-10) formatted in
aligned columns.
HINT
Use setw(4) from for alignment
LOGIC INSIGHT — setw() sets minimum width for next output — great for tabular alignment*/



#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            cout << setw(4) << i * j;
        }
        cout << endl;
    }
    
    return 0;
}