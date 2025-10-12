#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int num = 1, den = 2;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n >= 1)
        sum = 1.0; 

    for (i = 2; i <= n; i++) {
        sum = sum + (float)num / den;
        num = num + 2;
        den = den + 2;
    }

    printf("Approximate sum: %.1f", sum);
    return 0;
}
