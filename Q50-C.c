#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5; // number of rows

    for (i = 0; i < n; i++) {          // loop for rows
        for (j = 0; j < i; j++) {      // print spaces
            printf(" ");
        }
        for (k = 0; k < n - i; k++) {  // print stars
            printf("*");
        }
        printf("\n");                  // move to next line
    }

    return 0;
}
