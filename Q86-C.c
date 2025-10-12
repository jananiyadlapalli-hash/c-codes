#include <stdio.h>

int main() {
    char str[100];
    int len = 0, i, flag = 0;

    scanf("%[^\n]", str);  

    
    while (str[len] != '\0') {
        len++;
    }


    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
