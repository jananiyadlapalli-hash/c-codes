#include <stdio.h>

// Function to generate Fibonacci sequence (non-recursive)
void FIBO(int num) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Sequence up to %d terms:\n", num);

    for (i = 1; i <= num; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

// Main function
int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        FIBO(n); // function call
    }

    return 0;
}
