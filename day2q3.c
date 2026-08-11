// Wrte a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
void main(){
    float l,b,a,p;
    printf("Enter the length of the rectangle : ");
    scanf("%f" ,&l);
    printf("Enter the breath of the rectangle : ");
    scanf("%f" ,&b);
    a=l*b;
    p=2*l+2*b;
    printf("The area of rectangle= %f \n" ,a);
    printf("The perimeter of the rectangle= %f \n" ,p);
}