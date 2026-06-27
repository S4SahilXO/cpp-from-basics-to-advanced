/*Using std::string: reverse it, count vowels, check if it's a palindrome — all in separate functions.
HINT
Use string.length(), string[i], tolower() for case-insensitive check
LOGIC INSIGHT — std::string is a class with methods. Treat it like a smart char array with bounds checking.*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void rev(string s){
    reverse(s.begin(), s.end());
    cout << "Reversed string : " << s << endl;
}

void check_vowels(string s){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        char ch = tolower(s[i]);

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
    }

    cout << "vowels = " << count << endl;
}

void check_palindrome(string s){
    string temp = s;

    reverse(s.begin(), s.end());

    if(temp == s){
        cout << "Valid Palindrome";
    }else{
        cout << "Not a valid Palindrome";
    }
}

int main() {
    
    string s = "madam";
    rev(s);
    check_vowels(s);
    check_palindrome(s); 
    return 0;
}