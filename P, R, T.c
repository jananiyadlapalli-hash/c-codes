#include <stdio.h>
int main() {
    float p, r, t, si;

    printf("Principal: ");
    scanf("%f", &p);

    printf("Rate: ");
    scanf("%f", &r);

    printf("Time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}