#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[1000]; 

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for(i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    
    for(i = 0; i < n; i++) {
        if(i != 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
