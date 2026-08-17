//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

void main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is the largest.", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the largest.", b);
    }
    else if (c > a && c > b)
    {
        printf("%d is the largest.", c);
    }
    else if (a == b && b == c)
    {
        printf("All three numbers are equal.");
    }
    else if (a == b && a > c)
    {
        printf("%d and %d are equal and are the largest.", a, b);
    }
    else if (a == c && a > b)
    {
        printf("%d and %d are equal and are the largest.", a, c);
    }
    else if (b == c && b > a)
    {
        printf("%d and %d are equal and are the largest.", b, c);
    }
}