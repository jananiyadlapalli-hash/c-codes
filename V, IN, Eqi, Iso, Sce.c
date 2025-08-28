#include <stdio.h>

int main() 
{
    int x, y, z;
    
    printf("enter the value of x, y, z: ");
    scanf("%d, %d, %d", &x, &y, &z);
    
    if((x+y>z) && (y+z>x) && (z+x>y))
    {
        printf("valid triangle \n");
    }
    else 
    {
        printf("not an valid triangle \n");
    }
    
      if ((x==y) && (y==z))
    {
        printf("equilateral");
    }
    else if ((x==y) && (y==z) && (z==x))
    {
        printf("isoceles");
    }
    else
    {
        printf("scalene");
    }
    return 0;
}

