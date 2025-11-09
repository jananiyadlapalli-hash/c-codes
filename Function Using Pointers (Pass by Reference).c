#include <stdio.h>

// Function that modifies values using pointers
void modifyValues(int *a, float *b, char *c) {
    *a = *a + 10;
    *b = *b + 5.5;
    *c = *c + 1; // next ASCII character
}

int main() {
    int x = 5;
    float y = 12.5;
    char z = 'A';

    printf("----- Before modifyValues() -----\n");
    printf("x = %d, y = %.2f, z = %c\n", x, y, z);

    modifyValues(&x, &y, &z);

    printf("\n----- After modifyValues() -----\n");
    printf("x = %d, y = %.2f, z = %c\n", x, y, z);

    return 0;
}


