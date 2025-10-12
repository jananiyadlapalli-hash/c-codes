#include <stdio.h>

int main() {
    int n, original, rem, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  // store the original number

    while (n != 0) {
        rem = n % 10;              
        result = result + rem * rem * rem;  
        n = n / 10;                
    }

    if (original == result)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
