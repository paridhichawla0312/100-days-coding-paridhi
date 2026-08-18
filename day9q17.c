//Write a program to find the roots of a quadratic eqaution and categorise them.
#include <stdio.h>
#include <math.h>

void main(){
    float a,b,c,D,x1,x2;
    printf("Enter a,b,c : ");
    scanf("%f%f%f" ,&a,&b,&c);
    D=b*b-4*a*c;
    if (D>0){
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("Roots are real and distinct: \n");
        printf("Root 1= %f \n" ,x1);
        printf("Root 2= %f \n" ,x2);
    }
    else if (D==0){
        x1=(-b)/(2*a);
        printf("The roots are real and equal: \n");
        printf("The root is= %f \n" ,x1);
    }
    else {
        printf("The roots are imaginary");
    }
}