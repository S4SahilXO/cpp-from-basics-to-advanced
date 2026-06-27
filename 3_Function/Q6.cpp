/*Write a recursive function to solve the Tower of Hanoi problem for n disks. Print
each move.
HINT
Move n-1 disks to auxiliary, move largest to destination, move n-1 back
LOGIC INSIGHT — Classic recursion: the trick is trusting the recursive call handles n-1 correctly.*/


#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    // Base Case
    if (n == 1)
    {
        cout << "Move disk 1 from "
             << source
             << " to "
             << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move largest disk from source to destination
    cout << "Move disk "
         << n
         << " from "
         << source
         << " to "
         << destination << endl;

    // Move n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}