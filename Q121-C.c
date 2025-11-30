#include <stdio.h>

int main() {
    char name[50];
    int age;

    scanf("%s", name);
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if (!fp) {
        printf("Error creating file!");
        return 0;
    }

    fprintf(fp, "Name: %s Age: %d", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt");
    return 0;
}
