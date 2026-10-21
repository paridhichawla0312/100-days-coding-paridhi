#include <stdio.h>

int main() {
    int arr[100], freq[1000] = {0};
    int n, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        freq[arr[i]]++;

        if (freq[arr[i]] == 2) {
            printf("Repeated element = %d", arr[i]);
            return 0;
        }
    }

    printf("No repeated element found");

    return 0;
}