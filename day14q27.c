//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
void main(){
    int i,n,sum=0;
    printf("Enter a number: ");
    scanf("%d" ,&n);
    for (int i=1; i<=n; i++){
        sum=sum + 2*i -1;
    }
    printf("The sum is %d" ,sum); 
}