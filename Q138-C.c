#include <stdio.h>

enum Light {RED, YELLOW, GREEN};

int main() {
    for (int i = RED; i <= GREEN; i++)
        printf("%d=%d\n", i, i);

    return 0;
}
