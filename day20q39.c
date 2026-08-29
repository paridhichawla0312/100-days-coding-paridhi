//Write a program to find the product of odd digits of a number.
#include <stdio.h>
void main()
{
int f;
printf("Enter the number: \n");
scanf("%d",&f);
int g=1, d;
while (f>0)
{
d=f%10;
f=f/10;
if (d%2!=0)
{
g*=d;
}
}
printf("The product of odd digits of a number: \n %d",g);
}