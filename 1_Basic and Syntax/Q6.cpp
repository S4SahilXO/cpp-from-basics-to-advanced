/*Explain and demonstrate the difference between prefix (++i) and postfix (i++)
increment operators with output.
HINT
int a = ++i returns incremented value; int a = i++ returns original*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int pre_increment(int a){
    return ++a;
}

int post_increment(int a){
    return a++;
}

int main() {
    int a = 8;

    cout << pre_increment(a) << "\n";
    cout << post_increment(a);
    return 0;
}