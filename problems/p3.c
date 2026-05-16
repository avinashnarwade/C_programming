#include<stdio.h>
#define Mul(X) X*5 //macro

void main(){
    int y;
    y = Mul(2+4); //2+4*5
    printf("%d",y);
}