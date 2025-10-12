#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;
    scanf("%d", &n);

    int arr[1000]; 

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}


