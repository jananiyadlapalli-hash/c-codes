#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[1000];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = -2147483648, max2 = -2147483648; 
    for(i = 0; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    printf("%d\n", max2);
    return 0;
}
