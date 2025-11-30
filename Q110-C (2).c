#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i; j < i + k; j++)
            if (arr[j] > max) max = arr[j];

        printf("%d ", max);
    }

    return 0;
}
