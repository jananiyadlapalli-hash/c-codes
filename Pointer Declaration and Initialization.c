#include <stdio.h>

int main() {
    int x = 10;
    float y = 20.5;
    char z = 'A';

    int *ptrInt = &x;
    float *ptrFloat = &y;
    char *ptrChar = &z;

    printf("----- Pointer Declaration and Initialization -----\n");
    printf("x = %d, Address = %p\n", x, (void*)&x);
    printf("y = %.2f, Address = %p\n", y, (void*)&y);
    printf("z = %c, Address = %p\n", z, (void*)&z);

    printf("\nPointer Values:\n");
    printf("ptrInt = %p, *ptrInt = %d\n", (void*)ptrInt, *ptrInt);
    printf("ptrFloat = %p, *ptrFloat = %.2f\n", (void*)ptrFloat, *ptrFloat);
    printf("ptrChar = %p, *ptrChar = %c\n", (void*)ptrChar, *ptrChar);

    return 0;
}


