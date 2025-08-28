#include <stdio.h>

int main() 
{
    int x, y, z;
    
    printf("enter the value of x: ");
    scanf("%d", &x);
    
    printf("enter the value of y: ");
    scanf("%d", &y);
    
    printf("enter the value of z: ");
    scanf("%d", &z);
    
    if ((x+y>z) && (y+z>x) && (z+x>y))
    {
        printf("valid triangle");
    }
    else
    {
        printf("not a valid triangle");
    }
    return 0;
}