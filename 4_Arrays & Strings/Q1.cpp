/*Declare an array of 10 integers, fill it with user input, then print it in reverse order.
HINT
Iterate from index n-1 down to 0
LOGIC INSIGHT — Arrays are zero-indexed. Reverse iteration: start at size-1, go to 0.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n = 10;
    int arr[n];

    for(int i=0;i<n;i++){
        cout << "Enter a number which u want in array : ";
        cin >> arr[i];
        // cout << endl;
    }

    for(int j=n-1;j>=0;j--){
        cout << arr[j] << " ";
    }
    
    return 0;
}