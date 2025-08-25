#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("Enter the temperature of Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("fahrenheit=%.0f\n", fahrenheit);

    return 0;
}

