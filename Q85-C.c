#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    scanf("%[^\n]", str); 

    // Find length
    while (str[len] != '\0') {
        len++;
    }

    // Print in reverse
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
