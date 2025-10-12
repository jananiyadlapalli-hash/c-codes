#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j;
    scanf("%d %d", &r1, &c1);

    int mat1[100][100], mat2[100][100], sum[100][100];

    // Read first matrix
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);

    // Read second matrix
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Add matrices if dimensions match
    if(r1 != r2 || c1 != c2) {
        printf("Matrices cannot be added\n");
        return 0;
    }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Print result
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            if(j != 0) printf(" ");
            printf("%d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
