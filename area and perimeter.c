#include <stdio.h>

int main() {
    int length, breadth;
    int area, perimeter;

    printf("enter the length and breadth: ");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("area=%d, perimeter=%d\n", area, perimeter);

    return 0;
}





