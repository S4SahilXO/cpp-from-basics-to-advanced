/*Implement matrix multiplication for two 3x3 matrices. Explain the time complexity.
HINT
result[i][j] += a[i][k] * b[k][j] — triple nested loop
LOGIC INSIGHT — Matrix multiply: O(n³) for n×n. The k-loop accumulates the dot product of row i and col j.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    
    int mtrx_A[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };

    int mtrx_B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int res[3][3] = {0};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                res[i][j] += mtrx_A[i][k] * mtrx_B[k][j];
            }
        }
    }
    cout << "Result Matrix: \n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout << setw(4) << res[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}