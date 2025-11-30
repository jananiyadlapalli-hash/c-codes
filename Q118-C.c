#include <stdio.h>

int main() {
    int nums[] = {0,3,2,4};
    int n = 4; // array size
    int sum = 0, actual = 0;

    for (int i = 0; i < n; i++) sum += nums[i];

    actual = n * (n + 1) / 2;

    printf("%d", actual - sum);
    return 0;
}

