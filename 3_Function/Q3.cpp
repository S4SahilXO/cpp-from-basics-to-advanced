/*Implement a recursive function to compute the nth Fibonacci number. Compare with
iterative version and discuss stack overflow risk.
HINT
fib(n) = fib(n-1) + fib(n-2); base: fib(0)=0, fib(1)=1
LOGIC INSIGHT — Recursive fib is O(2^n) — exponential. Iterative is O(n). Recursion has call stack overhead*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int fibRecursive(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibRecursive(n - 1) + fibRecursive(n - 2);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci number at position " << n
         << " = " << fibRecursive(n);

    return 0;
}