#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    scanf("%d %d", &n, &n);

    int mat[100][100];


    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < n && flag; i++) {
        for(j = 0; j < n; j++) {
            if(mat[i][j] != mat[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
