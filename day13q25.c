//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
void main(){
    int n1,n2,a;
    float r;
    printf("Enter two numbers: ");
    scanf("%d%d" ,&n1,&n2);
    printf("Press 1 for addition\nPress 2 for subtraction\nPress 3 for multiplication\nPress 4 for division\nPress 5 for modulus\n");
    scanf("%d" ,&a);
    switch(a){
        case 1:
        r=n1+n2; 
        printf("Result: %f" ,r);
        break;
        case 2:
        r=n1-n2; 
        printf("Result: %f" ,r);
        break;
        case 3:
        r=n1*n2; 
        printf("Result: %f" ,r);
        break;
        case 4:
            if (n2==0){
            printf("ERROR, DIVISION BY ZERO");
            }
            else{
            r=n1/n2; 
            printf("Result: %f" ,r);
            }
        break;
        case 5:
        r=n1%n2; 
        printf("Result: %f" ,r);
        break;
        default:
        printf("INVALID");
        break;
    }
}