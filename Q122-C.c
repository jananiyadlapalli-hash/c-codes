#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (!fp) {
        printf("File not found!");
        return 0;
    }

    char line[200];

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
