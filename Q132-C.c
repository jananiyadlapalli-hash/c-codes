#include <stdio.h>

enum Light {RED, YELLOW, GREEN};

int main() {
    enum Light l = GREEN;

    if (l == RED) printf("Stop");
    else if (l == YELLOW) printf("Wait");
    else printf("Go");

    return 0;
}
