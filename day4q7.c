//Wriyte a program to swap two numbers without using a third variable.
#include <stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d" ,&a,&b);
    printf("Before swapping : %d %d \n" ,a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping : %d %d" ,a,b);
}