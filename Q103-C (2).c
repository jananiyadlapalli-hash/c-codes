#include <stdio.h>

int main() {
    int nums[] = {1,7,3,6,5,6};
    int n = sizeof(nums)/sizeof(nums[0]);

    int total = 0;
    for(int i = 0; i < n; i++)
        total += nums[i];

    int leftSum = 0;

    for(int i = 0; i < n; i++) {
        int rightSum = total - leftSum - nums[i];
        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += nums[i];
    }

    printf("-1\n");
    return 0;
}
