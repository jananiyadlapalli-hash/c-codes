#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "a");
    if (!fp) {
        printf("Error opening file!");
        return 0;
    }

    char text[200];
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "\n%s", text);

    fclose(fp);
    printf("File updated successfully with appended text.");
    return 0;
}
