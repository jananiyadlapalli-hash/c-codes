#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};  
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;
        if (freq[index] == 2) {
            printf("%c", str[i]);
            return 0; // Stop after first repeat
        }
    }

    printf("No repeating character");
    return 0;
}
