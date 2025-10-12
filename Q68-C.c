#include <stdio.h>

int main() {
    int n, i, pos;
    scanf("%d", &n);

    int arr[1000];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos); 
    
    
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i+1];
    }

    n--; 
    
    
    for(i = 0; i < n; i++) {
        if(i != 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
