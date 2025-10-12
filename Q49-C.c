#include <stdio.h>

int main() {
    int i, j, start;

    for (i = 1; i <= 5; i++) {     
        start = 6 - i;               // starting number for each row
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
