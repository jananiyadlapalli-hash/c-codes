#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {        // outer loop for rows
        for (j = 1; j <= 5; j++) {    // inner loop for columns
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}

