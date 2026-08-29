//Write a program to find the sum of digits of a number.#include <stdio.h>
void main()
{
int n;
printf("Enter the number :\n");
scanf("%d" ,&n);
long sum;
while (n>0)
{
sum=sum+n%10;
n=n/10;
}
printf("The sum of the numbers is= %ld" , sum);
}