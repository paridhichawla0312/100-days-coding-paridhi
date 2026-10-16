#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k, n, count, max = 0, repeat;

    printf("Enter a string: ");
    scanf("%99s", s);

    n = strlen(s);

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = i; j < n; j++) {
            repeat = 0;

            for (k = i; k < j; k++) {
                if (s[j] == s[k]) {
                    repeat = 1;
                    break;
                }
            }

            if (repeat == 1) {
                break;
            }

            count++;

            if (count > max) {
                max = count;
            }
        }
    }

    printf("Length = %d", max);

    return 0;
}