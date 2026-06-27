/*Demonstrate all comparison operators (==, !=, <, >, <=, >=) and logical operators
(&&, ||, !) with examples.
Print true/false results for each expression
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int a = 50 , b = 60;
    cin >> a >> b;
    cout << boolalpha;

    // comparsion operator
    cout << "a ==b : " << (a==b) <<endl;
    cout << "a!=b : " << (a!=b) <<endl;
    cout << "a<b : " << (a<b) <<endl; 
    cout << "a>b : " << (a>b) <<endl;
    cout << "a<=b : " << (a<=b) <<endl;
    cout << "a>=b : " << (a>=b) << endl;
    
    //logical operator
    cout << "a && b : " << (a > b && a>=b) <<endl;
    cout << "a || b : " << (a == b || b > a) << endl;
    cout << "!(a == b) : " << !(a == b) ;
    return 0;
}