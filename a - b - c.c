

#include <stdio.h>
int main() 
{
    // subtract them and print the difference 
    int a, b, c, d;
    
    printf("enter number a: ");
    scanf("%d", &a);
    
    printf("enter number b: ");
    scanf("%d", &b);
    
    printf("enter number c: ");
    scanf("%d", &c);
    d = a - b - c;
    
    printf("The difference of %d, %d, %d is: %d\n", a, b, c, d);
    
    return 0;
}