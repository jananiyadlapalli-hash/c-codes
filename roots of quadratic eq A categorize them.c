#include <stdio.h>
#include <math.h>   

int main() {
    int a, b, c;
    float D, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    D = (b * b) - (4 * a * c);

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and different: %.2f, %.2f\n", root1, root2);
    }
    else if (D == 0) {
        root1 = -b / (2.0 * a);
        printf("Roots are real and same: %.2f\n", root1);
    }
    else {
        printf("Roots are complex\n");
    }