/*Write a program that counts the frequency of each character in a string using an
array of size 26 (for a-z).
HINT
freq[ch - 'a']++ for lowercase chars
LOGIC INSIGHT — ASCII trick: 'a' = 97, so ch - 'a' maps 'a'→0, 'b'→1 ... 'z'→25. Elegant indexing.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    string s;
    cout << "Enter any text : ";
    getline(cin, s);

    int S_freq[26] = {0};

    for(char ch : s){
        if(ch >='a' && ch <= 'z'){
            S_freq[ch - 'a']++;
        }
    }

    for(int i=0; i<26; i++){
        if(S_freq[i]>0){
            cout << char(i + 'a') << " = " << S_freq[i] << endl;
        }
    }
    
    return 0;
}