#include <stdio.h>

int main() {
    int a, b;

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    // swap without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("after swap: %d, %d\n", a, b);

    return 0;
}

