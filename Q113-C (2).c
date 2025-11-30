#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {10,5,4,3,48,6,2,33,53,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;

    qsort(arr, n, sizeof(int), cmp);

    printf("%d\n", arr[k-1]);
    return 0;
}
