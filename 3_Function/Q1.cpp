/*Write a function isPrime(int n) that returns true if n is prime. Use it to print all primes
up to 200.
HINT
Return bool; check from 2 to sqrt(n)
LOGIC INSIGHT — Functions encapsulate logic. A clean isPrime() is reusable — don't repeat prime logic
everywhere.
*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isprime(int n){
    int count = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            count++;
        }
    }
    return count == 2;
}

int main() {

    for(int i=1;i<=200;i++){
        if(isprime(i)){
            cout << i << " ";
        }
    }   
    return 0;
}