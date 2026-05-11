#include<stdio.h>
#include<math.h>
// returntype function_name (parameterType...)
int logic(int,int,int);

void main(){

    int a,b,c;

    printf("Enter the value of a:-\n");
    scanf("%d",&a);

    printf("Enter the value of b:- \n");
    scanf("%d",&b);

    printf("Enter the value of c:- \n");
    scanf("%d",&c);

    // calling to the function 

    int result = logic(a,b,c);
     printf("The result is :- %d",result);
}
int logic(int a, int b, int c){
    printf("calculating...........\n");

    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }else{
        return c;
    }
}