#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    if (!fp) {
        printf("File not found!");
        return 0;
    }

    int ch, chars = 0, words = 0, lines = 0;
    int inWord = 0;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;

        if (!isspace(ch) && !inWord) {
            words++;
            inWord = 1;
        }
        else if (isspace(ch)) {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d", chars, words, lines + 1);
    return 0;
}
