#include <stdio.h>

int main() {
    int n, sum = 0, odd = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += odd;   // add the odd number
        odd += 2;     // move to next odd number
    }

    printf("Sum = %d\n", sum);

    return 0;
}
