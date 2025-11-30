#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (!fp) {
        printf("Error opening file!");
        return 0;
    }

    int num, sum = 0, count = 0;

    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fp);

    printf("Sum = %d\nAverage = %.2f", sum, (float)sum / count);
    return 0;
}
