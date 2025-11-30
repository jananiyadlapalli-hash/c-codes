#include <stdio.h>

int main() {
    int nums1[] = {2,7,11,15};
    int nums2[] = {4,8,10};
    int m = 4, n = 3;

    int i = 0, j = 0;

    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            printf("%d ", nums1[i++]);
        } else {
            printf("%d ", nums2[j++]);
        }
    }

    while (i < m) printf("%d ", nums1[i++]);
    while (j < n) printf("%d ", nums2[j++]);

    return 0;
}
