#include<stdio.h>

int main(){
    int a=5,b=10,c=15;

    printf("%d ", sizeof(c/=a+b));
    printf("%d\n",c);

    return(0);
}