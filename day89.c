//Show that enums store integers by printing assigned values.
#include <stdio.h>

int main() {
    enum Days {
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY
    };

    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);

    return 0;
}