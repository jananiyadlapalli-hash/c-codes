#include <stdio.h>

int main() {
    int n, i, key;
    scanf("%d", &n);

    int arr[1000];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int left = 0, right = n - 1, found = -1;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == key) {
            found = mid;
            break;
        } else if(arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if(found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

    return 0;
}

