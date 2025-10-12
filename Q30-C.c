#include <stdio.h>

int main() {
    int n, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        rem = n % 10;         // get last digit
        rev = rev * 10 + rem; // build reversed number
        n = n / 10;           // remove last digit
    }

    printf("%d", rev);
    return 0;
}
