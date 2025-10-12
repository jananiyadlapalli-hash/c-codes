#include <stdio.h>

int globalVar = 5;

void testFunction() {
    int localVar = 10; 
    printf("Inside testFunction:\n");
    printf("Local variable = %d\n", localVar);
    printf("Global variable = %d\n\n", globalVar);
}

int main() {
    testFunction();

    printf("Accessing globalVar inside main(): %d\n", globalVar); // ✅ Works fine
    return 0;
}
