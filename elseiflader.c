#include<stdio.h>

void main(){

    int a,b;
    printf("Value of a: ");
    scanf("%d",&a);


    printf("Value of b: ");
    scanf("%d",&b);

    if(a>0 && b>0){
        if(a>b){
            printf("A is greater");
        }else if(a==b){
            printf("Your both values are equal");

        }
        else{
            printf("B is greater ");
        }
        
    }else if(a==-0){
        printf("it is incorrect ");
    }
    else{
        printf("Your values are -ve");
    }
}