#include <stdio.h>

int main() {
    int i, j, k;
    for(i = 1; i <= 5; i++) {  // loop for rows
        // Print spaces
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        // Print numbers
        for(k = 6 - i; k <= 5; k++) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
