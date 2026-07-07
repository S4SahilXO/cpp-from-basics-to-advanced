/*Use new and delete to dynamically allocate an integer array of size n (user-input).
Fill it, print it, then free the memory.
HINT
int* arr = new int[n]; ... delete[] arr;
LOGIC INSIGHT — new allocates on the heap. delete/delete[] must match new/new[]. Forgetting = memory leak.*/

#include <iostream>
// I'm using boiler plate code for the includes and namespace, you can remove the unused ones if you want.  
#include <vector> 
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    cout << "Enter size of an array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter "<< n << " elements: "<< endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Array is: ";
    for(int i=0;i<n;i++){
        cout <<arr[i] << " ";
    }

    delete[] arr;

    return 0;
}