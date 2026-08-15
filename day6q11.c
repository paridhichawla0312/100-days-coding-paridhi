//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}