/*Demonstrate the use of break and continue. Print numbers 1-20 but skip multiples of
3 and stop at the first multiple of 17.
HINT
continue skips the rest of iteration; break exits the loop
LOGIC INSIGHT — break exits the nearest enclosing loop. continue jumps to the next iteration. Use sparingly for clarity.*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    for(int i=1; i<=20; i++){
        if(i%3 == 0){
            continue;
        }

        if(i%17 == 0){
            break;
        }
        
        cout << i << "\n";
    }
    
    return 0;
}