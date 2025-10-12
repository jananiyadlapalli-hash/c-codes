#include <stdio.h>

int main() {
    char str[200];
    scanf("%[^\n]", str);

    int i = 0;

    
    if (str[i] != ' ') {
        printf("%c.", str[i]);
    }

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != '\0') {
            printf("%c.", str[i + 1]);
        }
    }

    return 0;
}
