/*Create a function that takes a C-style array and its size, returns the min, max, and
average (use output parameters via references).
HINT
void stats(int arr[], int n, int &mn;, int &mx;, double &avg;)
LOGIC INSIGHT — Multiple return values via reference parameters — a common C-style pattern before std::tuple.*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void arr_stats(int arr[], int n, int &min, int &max, double &avg){
    min = arr[0];
    max = arr[0];
    int sum = 0;

    for(int i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }

        sum += arr[i];
    }
    
    avg = sum/n;

}

int main() {
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;


    int arr[n];

    for(int i=0;i<n;i++){
        cout << "Enter the " << i << " element in array : ";
        cin >> arr[i];
    }
    
    int min, max;
    double avg;

    arr_stats(arr, n, min, max, avg);

    cout << "min " << min << "\n";
    cout << "max: " << max << endl;
    cout << "avg: " << avg << "\n";

   return 0;
}