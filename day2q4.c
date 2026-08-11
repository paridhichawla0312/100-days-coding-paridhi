// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
void main(){
    float r,a,c;
    printf("Enter the radius of the circle : ");
    scanf("%f" ,&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("The area of circle= %f \n" ,a);
    printf("The circumference of circle= %f \n" ,c);
}