//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int n, original, digit, numDigits = 0, sum = 0;

    scanf("%d", &n);
    original = n;

    for (int temp = n; temp != 0; temp /= 10)
        numDigits++;

    for (int temp = n; temp != 0; temp /= 10) {
        digit = temp % 10;
        int power = 1;
        for (int i = 0; i < numDigits; i++)
            power *= digit;
        sum += power;
    }

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}