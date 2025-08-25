#include <stdio.h>

int main() {
    int length, breadth;
    int area, perimeter;

    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("area=%d, perimeter=%d\n", area, perimeter);

    return 0;
}





