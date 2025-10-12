#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    scanf("%[^\n]", str);

    int len = strlen(str), i;
    int spaceCount = 0;

    
    for (i = 0; i < len; i++) {
        if (str[i] == ' ') spaceCount++;
    }

    
    int wordCount = 0, start = 0;
    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (wordCount < spaceCount) {
                printf("%c.", str[start]);
            } else {
              
                for (int j = start; j < i; j++)
                    printf("%c", str[j]);
            }
            start = i + 1;
            wordCount++;
        }
    }

    return 0;
}
