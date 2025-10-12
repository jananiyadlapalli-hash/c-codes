#include <stdio.h>

int main() {
    int n1, n2, i;
    scanf("%d", &n1);

    int arr1[1000], arr2[1000];
    
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Print merged array
    for(i = 0; i < n1; i++) {
        if(i != 0) printf(" ");
        printf("%d", arr1[i]);
    }
    for(i = 0; i < n2; i++) {
        printf(" %d", arr2[i]);
    }
    printf("\n");

    return 0;
}
