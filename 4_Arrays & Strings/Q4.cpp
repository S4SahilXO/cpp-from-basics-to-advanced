/*Create a 3x3 2D array (matrix), take user input, and compute the transpose (swap rows and columns).
HINT
Transpose: result[j][i] = original[i][j]
LOGIC INSIGHT — 2D arrays: arr[row][col]. Transposing swaps row and column indices.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int main() {
    int arr[3][3];
    
    cout << "Enter element of 3X3 array : \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    
    cout << "Original Matrix:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout << "Transpose matrix:\n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
    
    return 0;
}