#include <stdio.h>
#include <math.h> 

int main() {
    int n, i, j, isPrime;
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        isPrime = 1; 
        for(j = 2; j*j <= i; j++) { 
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d", i);
            if(i != n && i != 2) printf(" ");
        }
    }
    printf("\n");
    return 0;
}

