/*What is the difference between int, long, long long, short? Write a program showing
their sizes and max values.
*/

#include <iostream>
#include <climits>

using namespace std;

int main() {
    cout << "short" << endl;
    cout << "Size: " << sizeof(short) << " bytes" << endl;
    cout << "Max Value: " << SHRT_MAX << endl << endl;

    cout << "int" << endl;
    cout << "Size: " << sizeof(int) << " bytes" << endl;
    cout << "Max Value: " << INT_MAX << endl << endl;

    cout << "long" << endl;
    cout << "Size: " << sizeof(long) << " bytes" << endl;
    cout << "Max Value: " << LONG_MAX << endl << endl;

    cout << "long long" << endl;
    cout << "Size: " << sizeof(long long) << " bytes" << endl;
    cout << "Max Value: " << LLONG_MAX << endl;

    return 0;
}