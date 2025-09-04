//WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, zero entered

#include <stdio.h>

int main() {
    int num;
    int positive = 0, negative = 0, zero = 0;
    char choice = 'y';   

    while (choice == 'y' || choice == 'Y') {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); 
    }

    printf("\nCount of positive numbers: %d", positive);
    printf("\nCount of negative numbers: %d", negative);
    printf("\nCount of zeros: %d\n", zero);

    return 0;
}
