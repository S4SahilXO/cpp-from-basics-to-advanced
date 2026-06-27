/*Print all prime numbers between 1 and 100 using a nested for loop and explain your
primality check logic*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    for(int i=2; i<=100; i++){
        bool prime = true;
            
            for(int j=2; j<i; j++){
                if(i%j==0){
                    prime = false;
                    break; 
                }
            }
            if(prime){
                cout << i << " ";
            }
        }
    return 0;
}