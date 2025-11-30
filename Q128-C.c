#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (!fp) {
        printf("File not found!");
        return 0;
    }

    int ch, v = 0, c = 0;

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\nConsonants: %d", v, c);
    return 0;
}
