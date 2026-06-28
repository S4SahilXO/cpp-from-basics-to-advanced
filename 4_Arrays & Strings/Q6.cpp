/*Write a program that counts the frequency of each character in a string using an
array of size 26 (for a-z).
HINT
freq[ch - 'a']++ for lowercase chars
LOGIC INSIGHT — ASCII trick: 'a' = 97, so ch - 'a' maps 'a'→0, 'b'→1 ... 'z'→25. Elegant indexing.*/

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    printf("\nCharacter Frequencies:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c = %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}