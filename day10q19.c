//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
void main(){
    float a,b,c;
    printf("Enter the sides of the triangle : ");
    scanf("%f%f%f" ,&a,&b,&c);
    if (a==b && a==c){
        printf("The triangle is equilateral");
    }
    else if (a==b || a==c || b==c){
        printf("The triangle is isosceles");
    }
    else {
        printf("The triangle is scalene");
    }
}