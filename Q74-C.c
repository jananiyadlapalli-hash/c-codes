#include <stdio.h>

int main() {
    int rows, cols, i, j;
    scanf("%d %d", &rows, &cols);

    int matrix[100][100], transpose[100][100]; 

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j]; 
        }
    }

    // Print transpose
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            if(j != 0) printf(" ");
            printf("%d", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
