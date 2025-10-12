#include <stdio.h>

int main() {
    int n, i;
    int positive = 0, negative = 0, zero = 0;
    scanf("%d", &n);

    int arr[1000]; 

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    return 0;
}


