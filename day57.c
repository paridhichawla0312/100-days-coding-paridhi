#include <stdio.h>

int main() {
    int n, i, j, arr[100], greater;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        greater = -1;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                greater = arr[j];
                break;
            }
        }

        printf("%d", greater);

        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}