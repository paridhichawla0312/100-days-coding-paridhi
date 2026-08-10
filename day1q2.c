//Write a program to to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
void main(){
    float n1,n2,a,s,m,d;
    printf("Enter two numbers:\n");
    scanf("%f%f" ,&n1,&n2);
    a=n1+n2;
    s=n1-n2;
    m=n1*n2;
    printf("The addition is %f \n" ,a);
    printf("The subtraction is %f \n" ,s);
    printf("The multiplication is %f \n" ,m);
    if (n2==0){
        printf("The quotient is undefined \n");
    }
    else{
        d=n1/n2;
        printf("The quotient is %f" ,d);
    }
}