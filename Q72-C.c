#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    scanf("%d %d", &rows, &cols);

    int matrix[100][100]; // safe fixed-size 2D array

    // Read matrix elements and calculate sum
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("%d\n", sum);
    return 0;
}
