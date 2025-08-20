// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    //divide the given number and print the result
    int a, b, c, l;
    
    printf("enter number a: ");
    scanf("%d", &a);
    
    printf("enter number b: ");
    scanf("%d", &b);
    
   l = a / b;
    
    printf("result %d, %d is: %d\n", a, b, l);
    
    return 0;
}