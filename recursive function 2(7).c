#include<stdio.h> 
long int FACT(int num)  
{ 
if (num == 0 || num == 1) 
return 1; 
else 
return num * FACT(num - 1); 
} 
int main()  
{ 
int n, r; 
long int res1,res2, res3; 
long int coefficient; 
char choice; 
printf("Binomial Coefficient Calculator: C(n, r) = n! / (r! * (n - r)!)\n"); 
printf("--------------------------------------------------------------\n"); 
do { 
                // Input n and r 
         printf("\nEnter value for n (non-negative integer): "); 
         scanf("%d", &n); 
         printf("Enter value for r (non-negative integer, <= n): "); 
         scanf("%d", &r); 
 
         // Validate input 
         if (n < 0 || r < 0 || r > n)  
{ 
              printf("Invalid input. Ensure that n >= 0, r >= 0, and r <= n.\n"); 
         }  
else 
 { 
   res1= FACT(n); 
res2 = FACT(r); 
res3 = FACT(n - r); 
coefficient = res1/(res2 * res3); 
 printf(“For n=%d and r=%d Binomial Coefficient=%ld”, n, r, coefficient); 
                    } 
 
        // Ask if user wants to continue 
        printf("\nDo you want to compute another value? (y/n): "); 
        scanf(" %c", &choice); 
 
    } while (choice == 'y' || choice == 'Y'); 
 
    printf("\nThank you for using the Binomial Coefficient Calculator.\n"); 
    return 0; 
}