#include <stdio.h>

int main() {
    int rows, cols, i, j;
    scanf("%d %d", &rows, &cols);

    int matrix[100][100]; // safe fixed-size 2D array

    // Read matrix elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(j != 0) printf(" ");
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
