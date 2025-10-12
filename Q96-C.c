#include <stdio.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    scanf("%[^\n]", str);

    int i = 0, start = 0;

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            if (str[i] == '\0')
                break;
            start = i + 1;
        }
        i++;
    }

    printf("%s", str);
    return 0;
}
