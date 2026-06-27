/*Implement FizzBuzz: print 1-100, replace multiples of 3 with 'Fizz', 5 with 'Buzz', both
with 'FizzBuzz'.
HINT
Check 15 first (both), then 3, then 5
LOGIC INSIGHT — Classic interview problem. Order of conditions matters — check the combined case first.*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    int n = 100;

    for(int i=1; i<=n ; i++){
        if (i%3 == 0 && i%5 == 0){
            cout << "FizzBuzz" << "\n";
        }else if(i%3 == 0){
            cout << "Fizz" << "\n";
        }else if(i%5==0){
            cout << "Buzz" << "\n";
        }else{
            cout << i << "\n";
        }
    }
    
    return 0;
}