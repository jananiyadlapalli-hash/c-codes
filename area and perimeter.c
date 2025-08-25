#include <stdio.h>

int main() {
    int length, breadth;
    int area, perimeter;

    // Input: two integers on one line separated by space (e.g., 5 10)
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Output format must match exactly
    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}





