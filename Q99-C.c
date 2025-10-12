#include <stdio.h>

int main() {
    char date[20];
    scanf("%s", date);  

  
    if (date[3] == '0' && date[4] == '4') {
        date[3] = '-';
        date[4] = 'A';
        date[5] = 'p';
        // Shift rest of the string
        for (int i = 6; date[i-1] != '\0'; i++) {
            date[i] = date[i+2]; 
        }
        date[8] = '\0'; 
    }

    printf("%s", date);
    return 0;
}
