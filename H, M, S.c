#include <stdio.h>
int main() {
    int sec, h, m, s;

    printf("enter the time in seconds: ");
    scanf("%d", &sec);

    h = sec / 3600;
    m = (sec % 3600) / 60;
    s = sec % 60;

    printf("%d, %d, %d\n", h, m, s);

    return 0;
}
