/*Write a function that checks if two strings are anagrams (same chars,different order) in O(n) time.
HINT
Sort both and compare, or use a frequency array of 26 ints
LOGIC INSIGHT — Frequency array approach: increment for string1, decrement for string2. All zeros = anagram.*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool Anagram(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }

    int freq[26] = {0};

    for(char ch : s1){
        freq[ch - 'a']++;
    }

    for(char ch : s2){
        freq[ch - 'a']--;
    }

    for(int i=0; i<26; i++){
        if(freq[i] != 0){
            return false;
        }
    }

    return true;
}

int main() {
    
    string s1 = "triangle";
    string s2 = "integral";
    
    if(Anagram(s1, s2))
        cout << "Anagram";
    else
        cout << "Not an Anagram";
        
    return 0;
}