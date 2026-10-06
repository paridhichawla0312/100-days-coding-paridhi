#include <stdio.h>

int main() {
    int n, i, total = 0, left = 0, right;
    int pivot = -1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        total += i;
    }

    for (i = 1; i <= n; i++) {
        left += i;
        right = total - left + i;

        if (left == right) {
            pivot = i;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}