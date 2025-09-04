//WAP to print the multiplication table of the number entered  by the user and the output should be int the correct format

#include <stdio.h>

int main()
    {
     int num, i;
     
     printf("enter the number: ");
     scanf("%d", &num);
     
     printf("multiplication table \n of %d:\n", num);
     
     for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

     