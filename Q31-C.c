#include <stdio.h>

int main() {
    int n, rem;
    long long binary = 0;
    long long place = 1;  
    
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 2;            
        binary = binary + rem * place;
        n = n / 2;              // divide number by 2
        place = place * 10;    
    }

    printf("%lld", binary);
    return 0;
}
