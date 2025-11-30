#include <stdio.h>

int main() {
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("destination.txt", "w");

    if (!src || !dest) {
        printf("Error opening files!");
        return 0;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to destination.txt");
    return 0;
}
