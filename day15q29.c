//Write a program to calculate the factorial of a number.
#include <stdio.h>
void main(){
    int i,n;
    long long f=1;
    printf("ENTER A NUMBER: ");
    scanf("%d" ,&n);
    if (n<0){
        printf("INVALID");
    }
    else{
        for (i = 1; i<=n; i++){
            f=f*i;
        }
    }
    printf("THE FACTORIAL IS: %lld" ,f);
}