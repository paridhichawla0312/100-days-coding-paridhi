#include <stdio.h>

int main() {
    int arr[100], n, i;
    int total = 0, left = 0, right;
    int pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (i = 0; i < n; i++) {
        right = total - left - arr[i];

        if (left == right) {
            pivot = i;
            break;
        }

        left += arr[i];
    }

    printf("%d", pivot);

    return 0;
}