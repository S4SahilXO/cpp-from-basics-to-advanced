/*Write binary search on a sorted array. Return the index of a target, or -1 if not found.
HINT
mid = (low + high) / 2; compare and adjust low or high
LOGIC INSIGHT — Binary search: O(log n). Halves the search space each step. REQUIRES sorted array.*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    int n = 5;
    int arr[n]={1,2,3,4,5};
    int target = 5;

    int low = 0;
    int high = n-1;
    int index = -1;

    while (low<=high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == target){
            index = mid;
            break;
        }else if(arr[mid] < target){
            low = mid + 1;
        }else{
            high = mid-1;
        }
    }
    cout << "Index = " << index;

    return 0;
}