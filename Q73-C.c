#include <stdio.h>

int main() {
    int rows, cols, i, j;
    scanf("%d %d", &rows, &cols);

    int matrix[100][100]; // safe 2D array
    int rowSum[100];      

    for(i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    // Print row sums
    for(i = 0; i < rows; i++) {
        if(i != 0) printf(" ");
        printf("%d", rowSum[i]);
    }
    printf("\n");

    return 0;
}
