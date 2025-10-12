#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);  // Read full line including spaces

    int count = 0;
    while (str[count] != '\0') {
        count++;
    }

    printf("%d", count);
    return 0;
}
