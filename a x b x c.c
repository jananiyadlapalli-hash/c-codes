// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    // mutiple the given number and print the result
    int a, b, c,m;
    
    printf("enter number a: ");
    scanf("%d", &a);
    
    printf("enter number b: ");
    scanf("%d", &b);
    
    printf("enter number c: ");
    scanf("%d", &c);
    m = a * b * c;
    
    printf("result %d, %d, %d is: %d\n", a, b, c, m);
    
    return 0;
}