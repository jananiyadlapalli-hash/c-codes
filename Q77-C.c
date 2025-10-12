#include <stdio.h>

int main() {
    int n, m, i, j, k, flag = 1;
    scanf("%d %d", &n, &m);

    int mat[100][100];
    int diag[100], count = 0;

   
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

  
    for(i = 0; i < n && i < m; i++) {
        diag[count++] = mat[i][i];
    }

    
    for(i = 0; i < count; i++) {
        for(j = i + 1; j < count; j++) {
            if(diag[i] == diag[j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    if(flag)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

