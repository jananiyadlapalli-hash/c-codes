#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10; // last digit
    digits = (int)log10(n);
    first = n / (int)pow(10, digits); 
    
    middle = n % (int)pow(10, digits);
    middle = middle / 10;

    
    result = last * (int)pow(10, digits) + middle * 10 + first;

    printf("%d", result);
    return 0;
}
