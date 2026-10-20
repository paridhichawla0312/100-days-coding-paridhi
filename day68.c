#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0, total, missing;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    total = n * (n + 1) / 2;

    missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}