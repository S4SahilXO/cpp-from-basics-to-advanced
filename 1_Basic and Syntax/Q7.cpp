/*Write a program that reads a temperature in Celsius and converts it to Fahrenheit
and Kelvin using the correct formulas.
HINT
F = (C * 9/5) + 32; K = C + 273.15 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int celcius;
    cout << "Enter the temp in celcius degree : ";
    cin >> celcius;

    float F = (celcius * 9/5) + 32;
    float K = celcius + 273.15;

    cout << "Fahrenheit : " << F << "\n";
    cout << "Kelvin : " << K << "\n";
    
    return 0;
}