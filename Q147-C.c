#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;

    scanf("%s %d %f", e1.name, &e1.id, &e1.salary);

    FILE *fp = fopen("emp.dat", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    fp = fopen("emp.dat", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("Name: %s | ID: %d | Salary: %.2f",
           e2.name, e2.id, e2.salary);

    return 0;
}
