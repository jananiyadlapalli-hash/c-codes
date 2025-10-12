#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    
    for (int k = 0; k < m; k++) {
        int i = 0, j = k;
        while (i < n && j >= 0) {
            printf("%d ", mat[i][j]);
            i++;
            j--;
        }
    }

   
    for (int k = 1; k < n; k++) {
        int i = k, j = m - 1;
        while (i < n && j >= 0) {
            printf("%d ", mat[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
