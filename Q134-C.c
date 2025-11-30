#include <stdio.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum Status s = FAILURE;

    if (s == SUCCESS) printf("Operation successful");
    else if (s == FAILURE) printf("Operation failed");
    else printf("Operation timed out");

    return 0;
}
