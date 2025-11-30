#include <stdio.h>

enum Role {ADMIN, USER, GUEST};

int main() {
    enum Role r = GUEST;

    if (r == ADMIN) printf("Welcome Admin!");
    else if (r == USER) printf("Welcome User!");
    else printf("Welcome Guest!");

    return 0;
}
