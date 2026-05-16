#include<stdio.h>

void main(){
    int a,b=2,c=5;
    a = (b,++c); //c+b = 8
    printf("%d",a);
}