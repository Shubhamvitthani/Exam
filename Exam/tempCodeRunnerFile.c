#include <stdio.h>

int leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    
}

int main() {
    int year;

    printf("Enter  year: ");
    scanf("%d", &year);

    if ( leap(year)) {
        printf("%d leap year.\n", year);
    } else {
        printf("%d not a leap year.\n", year);
    }

    return 0;
}
