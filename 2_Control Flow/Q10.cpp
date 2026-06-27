/*Use a for loop to reverse a number (e.g., 12345 → 54321) without converting it to a
string.
HINT
reversed = reversed * 10 + n % 10; n /= 10;
LOGIC INSIGHT — Build the reversed number digit by digit by shifting and appending — pure arithmetic reversal.*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    int n = 12345;
    int rev =0;

    for(; n>0; n/=10){
        rev = rev *10 + n%10;
    }

    cout << "Reversed Number : " << rev ;

    return 0;
}