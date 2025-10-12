#include <stdio.h>

int count = 7;

void displayCount();
void modifyCount();

int main() {
    printf("Initial value of count in main(): %d\n", count);
    displayCount();
    modifyCount();
    printf("Final value of count in main(): %d\n", count);
    return 0;
}

void displayCount() {
    printf("Accessing global count in displayCount(): %d\n", count);
}

void modifyCount() {
    count = count + 5; // Modifying global variable
    printf("Modified global count in modifyCount(): %d\n", count);
}
