#include <stdio.h>

int main() {
    long long n;
    int rem;
    long long onesComplement = 0;
    long long place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n != 0) {
        rem = n % 10;
        if (rem == 1)
            rem = 0;
        else
            rem = 1;

        onesComplement = onesComplement + rem * place;
        place = place * 10;
        n = n / 10;
    }

    printf("%lld", onesComplement);
    return 0;
}
