#include <stdio.h>

int main() {
    FILE *fp = fopen("students.txt", "w");
    fprintf(fp, "Asha 101 85\n");
    fprintf(fp, "Ravi 102 92\n");
    fclose(fp);

    fp = fopen("students.txt", "r");

    char name[50];
    int roll, marks;

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
