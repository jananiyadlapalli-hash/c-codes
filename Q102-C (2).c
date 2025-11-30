#include <stdio.h>

int ceilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;

    scanf("%d", &x);

    printf("%d\n", ceilIndex(arr, n, x));
    return 0;
}
