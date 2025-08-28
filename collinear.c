//WAP to check 3 points (x1,y1), (x2,y2), (x3,y3) are collinear or not
#include <stdio.h>
int main ()
{
    int x1,y1,x2,y2,x3,y3;
    printf("enter the coordinate of 1st p: ");
    scanf("%d,%d",&x1,&y1);

    printf("enter the coordinate of 2nd p: ");
    scanf("%d,%d",&x2,&y2);

    printf("enter the coordinate of 3rd p: ");
    scanf("%d,%d",&x3,&y3);

    if (((y2-y1)/(x2-x1))==((y2-y1)/(x2-x1)))
    {
        printf("points are collinear");
    }
    else
    {
        printf("points are not collinear");
    }
    return 0;
}