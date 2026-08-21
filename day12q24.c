/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include <stdio.h>
void main(){
    int a,bill;
    printf("Enter the units consumed : ");
    scanf("%d" ,&a);
    if (a<=100){
        bill=5*a;
        printf("The bill is %d rupees" ,bill);
    }
    else if (a>100 && a<=200){
        bill=500+(a-100)*7;
        printf("The bill is %d rupees" ,bill);
    }
    else if (a>200 && a<=300){
        bill=1200+(a-200)*10;
        printf("The bill is %d rupees" ,bill);
    }
    else if (a>300){
        bill=2200+(a-300)*12;
        printf("The bill is %d rupees" ,bill);
    }
    else{
        printf("INVALID");
    }
}