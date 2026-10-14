#include <stdio.h>

int main() {
    int arr[100], n, i, sum, maxSum;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sum = arr[0];
    maxSum = arr[0];

    for (i = 1; i < n; i++) {
        if (sum + arr[i] > arr[i]) {
            sum = sum + arr[i];
        }
        else {
            sum = arr[i];
        }

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d", maxSum);

    return 0;
}