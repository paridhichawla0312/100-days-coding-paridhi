//Write a program to find the LCM of two numbers.
#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter the two numbers: \n");
scanf("%d %d",&a,&b);
if(a>b)
{
c=a;
}
else
c=b;
for(int i=c;i<=a*b;i++)
{
if (i%a==0&& i%b==0)
{
printf("THE LCM IS : %d \n", i);
break;
}
}
}