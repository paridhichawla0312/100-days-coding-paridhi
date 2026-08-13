//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
void main(){
    int i, n, sum=0;
    printf("Enter a number : ");
    scanf("%d" ,&n);
    for (int i=1; i<=n; i++ ){
        sum=sum+i;
    }
    printf("sum is %d" ,sum);
}