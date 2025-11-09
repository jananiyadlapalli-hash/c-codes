#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';

    int *ptrInt = &a;
    float *ptrFloat = &b;
    char *ptrChar = &c;

    printf("----- Pointer Arithmetic -----\n");

    printf("Original ptrInt = %p\n", (void*)ptrInt);
    ptrInt++;
    printf("After increment: ptrInt = %p\n", (void*)ptrInt);
    ptrInt--;
    printf("After decrement: ptrInt = %p\n\n", (void*)ptrInt);

    printf("Original ptrFloat = %p\n", (void*)ptrFloat);
    ptrFloat++;
    printf("After increment: ptrFloat = %p\n", (void*)ptrFloat);
    ptrFloat--;
    printf("After decrement: ptrFloat = %p\n\n", (void*)ptrFloat);

    printf("Original ptrChar = %p\n", (void*)ptrChar);
    ptrChar++;
    printf("After increment: ptrChar = %p\n", (void*)ptrChar);
    ptrChar--;
    printf("After decrement: ptrChar = %p\n", (void*)ptrChar);

    return 0;
}


