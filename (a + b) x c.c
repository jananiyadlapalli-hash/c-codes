#include <stdio.h>
int main() 
{
    // add and mutiple the given number and print
    int a, b, c, AM;
    
    printf("enter number a: ");
    scanf("%d", &a);
    
    printf("enter number b: ");
    scanf("%d", &b);
    
    printf("enter number c: ");
    scanf("%d", &c);
    AM = (a + b) * c;
    
    printf("result %d, %d, %d is: %d\n", a, b, c, AM);
    
    return 0;
}