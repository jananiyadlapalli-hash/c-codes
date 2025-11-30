#include <stdio.h>

int main() {
    int arr[] = {100, 200, 300, 400};
    int n = sizeof(arr)/sizeof(arr[0]), k = 2;

    int sum = 0;
    for (int i = 0; i < k; i++) sum += arr[i];

    int maxSum = sum;

    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];
        if (sum > maxSum) maxSum = sum;
    }

    printf("%d\n", maxSum);
    return 0;
}
