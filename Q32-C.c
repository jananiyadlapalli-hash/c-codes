#include <stdio.h>

int main() {
    int n, original, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;  // reverse the digits
        n = n / 10;
    }

    if (original == rev)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
