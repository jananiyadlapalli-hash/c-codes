#include <stdio.h>

int main() {
    int groups[] = {4, 5, 3, 1};
    int i, j;

    for(i = 0; i < 4; i++) { 
        for(j = 1; j <= groups[i]; j++) {
            printf("*\n");
        }
        printf("\n"); 
    }

    return 0;
}
