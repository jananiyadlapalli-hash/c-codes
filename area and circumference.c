#include <stdio.h>

int main() {
    double r;
    const double PI = 4;

    printf("Enter radius of the circle: ");
    scanf("%lf", &r);

    double area = PI * r * r;
    double circ = 2 * PI * r;

    printf("area=%.2f, circumference=%.2f\n", area, circ);

    return 0;
}
