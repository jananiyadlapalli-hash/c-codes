#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    int marks;
};

int main() {
    struct Student s;       
    struct Student *ptr = &s;   // pointer to structure

    // Modify values using -> operator
    strcpy(ptr->name, "John");
    ptr->roll = 106;
    ptr->marks = 91;

    // Display modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
