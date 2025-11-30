#include <stdio.h>

int main() {
    char fname[50];
    scanf("%s", fname);

    FILE *fp = fopen(fname, "r");

    if (!fp) {
        printf("Error: File does not exist!");
        return 0;
    }

    printf("File opened successfully.\n");

    char line[200];
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
