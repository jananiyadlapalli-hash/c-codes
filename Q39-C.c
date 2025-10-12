#include <stdio.h>

int main() {
    int n, rem;
    int product = 1;
    int hasOdd = 0;  

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        if (rem % 2 != 0) {   
            product = product * rem;
            hasOdd = 1;
        }
        n = n / 10;
    }

    if (hasOdd == 0)
        product = 1;  

    printf("%d", product);
    return 0;
}
