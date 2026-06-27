/*Write a program to find the sum of digits of a number using a while loop (e.g., 1234
→ 1+2+3+4 = 10).
HINT
sum += n % 10; n /= 10; repeat while n > 0
LOGIC INSIGHT — % 10 extracts the last digit. / 10 removes it. Classic digit-extraction pattern*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    int n = 1234;
    int sum = 0;

    while(n>0){
        sum += n%10;
        cout << "Last digit of n is " << n%10 << " then sum becomes after sum = sum + n " << sum << "\n";
        n /=10;
    }

    cout << "The total sum: " << sum;
    
    return 0;
}