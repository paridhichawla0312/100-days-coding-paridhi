//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
void main(){
    float a,b,p,l;
    printf("Enter the Cost Price : \n");
    scanf("%f" ,&a);
    printf("Enter the Selling Price : \n");
    scanf("%f" ,&b);
    if (a>b){
        l=((a-b)/a)*100;
        printf("Your loss is %0.2f%%" ,l);
    }
    else if (a<b){
        p=((b-a)/a)*100;
        printf("Your profit is %0.2f%%" ,p);
    }
    else{
        printf("There is no profit or loss");
    }
}