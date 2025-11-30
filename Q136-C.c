#include <stdio.h>

enum Menu {ADD, SUBTRACT, MULTIPLY};

int main() {
    enum Menu choice = ADD;
    int a = 10, b = 20;

    switch (choice) {
        case ADD: printf("%d", a + b); break;
        case SUBTRACT: printf("%d", a - b); break;
        case MULTIPLY: printf("%d", a * b); break;
    }

    return 0;
}
