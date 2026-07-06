/*Implement your own versions of strlen(), strcpy(), and strcat() for C-style strings
without using .
HINT
C-strings are null-terminated char arrays. Loop until '\0'
LOGIC INSIGHT — C-strings end at '\0'. Understanding this reveals why buffer overflows are dangerous.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int len_string(char str[]){
    int len = 0;

    while(str[len] != '\0'){
        len++;
    }
    return len;
}

void my_stringcpy(char dest[], char src[]){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void my_str_concat(char dest[], char src[]){
    int i =0;
    while(dest[i] != '\0'){
        i++;
    }

    int j = 0;
    while(src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = " world";
    char copy[100];
    

    cout << "The lenght of my string is " << len_string(str1) << endl;
    my_stringcpy(copy, str1);
    cout << "My copied string = " << copy << endl;

    my_str_concat(str1, str2);
    cout << "Concat string is " << str1 << endl;

    return 0;
}