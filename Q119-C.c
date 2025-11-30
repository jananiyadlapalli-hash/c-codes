#include <stdio.h>

int main() {
    int nums[] = {1,3,3,4};
    int n = 4;

    int seen[10000] = {0};

    for (int i = 0; i < n; i++) {
        if (seen[nums[i]] == 1) {
            printf("%d", nums[i]);
            return 0;
        }
        seen[nums[i]] = 1;
    }

    return 0;
}
