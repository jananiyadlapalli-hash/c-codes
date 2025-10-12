#include <stdio.h>

int main() {
    int n, original, rem, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        rem = n % 10;
        fact = 1;

        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == original)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
