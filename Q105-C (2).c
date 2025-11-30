#include <stdio.h>

int main() {
    int nums[] = {3,2,3};
    int n = sizeof(nums)/sizeof(nums[0]);

    int candidate = 0, count = 0;

    for(int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for(int i = 0; i < n; i++)
        if (nums[i] == candidate) count++;

    if (count > n/2) printf("%d\n", candidate);
    else printf("-1\n");

    return 0;
}
