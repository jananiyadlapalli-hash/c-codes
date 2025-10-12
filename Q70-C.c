#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);

    int arr[1000];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);
    k = k % n; 

    int temp[1000];

    
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

   
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    
    for(i = 0; i < n; i++) {
        if(i != 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}

