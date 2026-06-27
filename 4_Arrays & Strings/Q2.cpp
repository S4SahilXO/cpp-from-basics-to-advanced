/*Implement bubble sort on an integer array. Print the array after each pass to show
the progression.
HINT
Compare adjacent elements; outer loop n times, inner loop n-i-1
LOGIC INSIGHT — Bubble sort: largest elements 'bubble' to the end each pass. O(n²) — simple but slow.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;

    cout << "Enter the size of an array : ";
    cin >> n;

    int arr[n];
    
    for(int i=0;i<n;i++){
        cout << "Enter the element in array at " << i << " place : " ;
        cin >> arr[i];
    }
    cout << "This is your an array : ";
    for(int i = 0; i < n; i++){
        cout <<  arr[i] << " ";
    }
    cout << endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        cout << "Pass " << i+1 << " : ";
        for(int k=0;k<n;k++){
        cout << arr[k] << " ";
        }
        cout << endl;
    }
    return 0;
}