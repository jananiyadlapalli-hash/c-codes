

#include <stdio.h>
int main() 
{
    // add them and print the sum 
    int a, b, c, sum;
    
    printf("enter number a: ");
    scanf("%d", &a);
    
    printf("enter number b: ");
    scanf("%d", &b);
    
    printf("enter number c: ");
    scanf("%d", &c);
    sum = a + b + c;
    
    printf("The sum of %d, %d, %d is: %d\n", a, b, c, sum);
    
    return 0;
}