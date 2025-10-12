#include <stdio.h>

int main() {
    char str[200];
    scanf("%[^\n]", str);

    int i = 0, maxLen = 0, currLen = 0, start = 0, maxStart = 0;

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i + 1;
            if (str[i] == '\0')
                break;
        } else {
            currLen++;
        }
        i++;
    }

    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
