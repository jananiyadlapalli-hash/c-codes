#include <stdio.h>

int main() {
    int nums[] = {2,7,11,15};
    int n = 4, target = 9;

    int map[10000] = {0}; // simple hash map for positive ints

    for (int i = 0; i < n; i++) {
        if (map[target - nums[i]] != 0) {
            printf("%d %d", map[target - nums[i]] - 1, i);
            return 0;
        }
        map[nums[i]] = i + 1;
    }

    printf("-1 -1");
    return 0;
}
