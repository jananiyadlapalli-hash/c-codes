#include <stdio.h>

int main() {
    int x = 10; //Global to main()
    printf("x in main: %d\n", x);//Accessible here
    {
        int y = 20;
        printf("Inside Block 1: \n");
        printf("x=%d\n", x); //Accessible (from outer block)
        printf("y=%d\n", y); //Accessible (declard here)
    }
    
    {
        int z=30;
        printf("Inside Block 2:\n");
        printf("x=%d\n", x);//Accessible
        printf("z=%d\n", z);//Accessible
    }
    
    {
        int x=100;
        printf("Inside Block 3(x is re-declared):\n");
        printf("x=%d\n", x);
    }
    printf("Back in main:\n");
    printf("x= %d\n", x);
    return 0;
}