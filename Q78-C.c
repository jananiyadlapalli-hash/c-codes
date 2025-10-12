#include <stdio.h>

int main() {
    int n, m, i, j, sum = 0;
    scanf("%d %d", &n, &m);

    int mat[100][100];

    
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    
    for(i = 0; i < n && i < m; i++) {
        sum += mat[i][i];
    }

    printf("%d\n", sum);

    return 0;
}
