#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1; // use long long to handle large results

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("%lld", fact); // print factorial result
    return 0;
}
