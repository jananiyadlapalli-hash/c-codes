#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}; 
    scanf("%lld", &num);

    if(num == 0) count[0] = 1;

    while(num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    int maxCount = 0, mostDigit = 0;
    for(int i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            mostDigit = i;
        }
    }

    printf("%d\n", mostDigit);
    return 0;
}
