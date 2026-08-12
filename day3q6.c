#include <stdio.h>
void main(){
    int a,b,temp;
    printf("Enter two numbers : ");
    scanf("%d%d" ,&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: \n");
    printf("%d \n" ,a);
    printf("%d" ,b);
}
