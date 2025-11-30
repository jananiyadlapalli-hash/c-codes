#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int newWord = 1;

    while (str[i]) {
        if (newWord && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newWord = 0;
        } else if (str[i] == ' ') {
            newWord = 1;
        }
        i++;
    }

    puts(str);
    return 0;
}
