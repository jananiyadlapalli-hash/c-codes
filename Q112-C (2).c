#include <stdio.h>

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max_ending = arr[0], max_so_far = arr[0];

    for (int i = 1; i < n; i++) {
        if (max_ending + arr[i] < arr[i])
            max_ending = arr[i];
        else
            max_ending += arr[i];

        if (max_ending > max_so_far)
            max_so_far = max_ending;
    }

    printf("%d\n", max_so_far);
    return 0;
}
