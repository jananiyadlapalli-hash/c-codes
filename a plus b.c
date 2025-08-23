#include <stdio.h>
int main() 
{
    // add them and print the sum 
    int a, b, sum;
    
    printf("enter number a: ");
    scanf("%d", &a);
    
    printf("enter number b: ");
    scanf("%d", &b);
    
    sum = a+b;
    
    printf("The sum of %d, %d is: %d\n", a, b, sum);
    
    return 0;
}
    