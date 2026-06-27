/*Write a function with default parameters that computes power(base, exponent=2,
modulus=0). If modulus > 0, return base^exp % mod.
HINT
Default params go at the end of the parameter list
LOGIC INSIGHT — Default parameters reduce the need for overloads. They must be rightmost in the parameter list.*/

#include <iostream>
#include <cmath>
using namespace std;

int power(int base, int exponent = 2, int modulus = 0)
{
    int result = pow(base, exponent);

    if (modulus > 0)
    {
        return result % modulus;
    }

    return result;
}

int main()
{
    cout << power(5) << endl;     
    cout << power(5, 3) << endl;     
    cout << power(5, 3, 2) << endl;  

    return 0;
}