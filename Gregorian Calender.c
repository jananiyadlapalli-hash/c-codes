//According to the gregorian calender, it was Monday on the day 01/01/01. If any year is input through the keyboard WAP to find out what is the day on 1st January of this year.

#include <stdio.h>

int main() {
    int year, day = 1; 
    printf("Enter year: ");
    scanf("%d", &year);

    int totalDays = 0;

    for (int i = 1; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
            totalDays += 2; // leap year
        } else {
            totalDays += 1; // normal year
        }
    }

    int dayOfWeek = (day + totalDays) % 7;

    switch (dayOfWeek) {
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
    }

    return 0;
}

 
 