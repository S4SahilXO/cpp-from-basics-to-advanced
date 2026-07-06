/*Write a function that takes a sentence and returns it with each word's first letter capitalized (title case).
HINT
Capitalize after ' ' or at position 0. Use toupper()
LOGIC INSIGHT — Iterate char by char; state tracking (was-previous-a-space) drives capitalization.*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string titlecase(string s){
    if(!s.empty()){
        s[0] = toupper(s[0]);
    }

    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' && i+1 < s.length()){
            s[i+1] = toupper(s[i+1]);
        }
    }
    return s;
}

int main() {
    string str;
    cout << "Enter any text in lower case :";
    getline(cin, str);

    cout << "Title case : " << titlecase(str);

    
    return 0;
}