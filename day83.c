#include <stdio.h>

enum Months {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    enum Months month;

    char *names[] = {
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    for (month = JANUARY; month <= DECEMBER; month++) {
        switch (month) {
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("%s = 30 days\n", names[month - 1]);
                break;

            case FEBRUARY:
                printf("%s = 28 days\n", names[month - 1]);
                break;

            default:
                printf("%s = 31 days\n", names[month - 1]);
        }
    }

    return 0;
}