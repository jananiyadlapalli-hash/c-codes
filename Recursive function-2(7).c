#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int FIBO(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    int num;

    printf("Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer!\n");
        return 0;
    }

    printf("\nFibonacci Sequence up to %d terms:\n", num);

    for (int i = 0; i < num; i++) {
        printf("%d ", FIBO(i));
    }
    printf("\n");

    return 0;
}
