
// 1) prototype of a function (decalaration)
// 2) Definition of a function 
//3) access a function (calling a function)

#include<stdio.h>
// returnType function name (parameterType..);
int logic(int,int,int);


void main(){

    int a,b,c;
    printf("Enter the value of a:- ");
    scanf("%d",&a);

    printf("Enter the value of b:- ");
    scanf("%d",&b);

    printf("Enter the value of c:- ");
    scanf("%d",&c);

    // call to function 

    int result = logic(a,b,c);
    printf("The result is :- %d",result);

}


int logic(int a,int b,int c){

    printf("calculating...\n");

    if(a>b && a>c){
        return a;
    }else if(b>a && b>c){
        return b;
    }else{
        return c;
    }

}
