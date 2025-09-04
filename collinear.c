#include <stdio.h>

int main() {
    int x1,y1,x2,y2,x3,y3;

    printf("Enter the coordinate of 1st point: ");
    scanf("%d %d",&x1,&y1);

    printf("Enter the coordinate of 2nd point: ");
    scanf("%d %d",&x2,&y2);

    printf("Enter the coordinate of 3rd point: ");
    scanf("%d %d",&x3,&y3);

    // Collinearity condition using area of triangle
    if (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2) == 0) {
        printf("Points are collinear\n");
    } else {
        printf("Points are not collinear\n");
    }

    return 0;
}
