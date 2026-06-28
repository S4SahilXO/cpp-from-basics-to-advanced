/*Write a program that counts the frequency of each character in a string using an
array of size 26 (for a-z).
HINT
freq[ch - 'a']++ for lowercase chars
LOGIC INSIGHT — ASCII trick: 'a' = 97, so ch - 'a' maps 'a'→0, 'b'→1 ... 'z'→25. Elegant indexing.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[26] = {0};

    for (char ch : str) {
        if (ch >= 'a' && ch <= 'z')
            freq[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout << char(i + 'a') << " = " << freq[i] << endl;
    }

    return 0;
}