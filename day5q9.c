//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
void main(){
    float p, r, t, si, ci;
    printf("Enter principle amt, rate of interest and time : ");
    scanf("%f%f%f", &p, &r, &t);
    si = (p * r * t) / 100;
    float amount = p * pow(1 + r / 100, t);
    ci = amount - p;
    printf("Simple interest : %f, Compound interest : %f", si, ci);
}