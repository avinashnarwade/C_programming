

#include<stdio.h>

int avinash(int,int,int);

void main(){

    int a,b,c;
    printf("Enter value of a:- ");
    scanf("%d",&a);

    printf("Enter value of b:- ");
    scanf("%d",&b);

    printf("Enter value of c:- ");
    scanf("%d",&c);

    int result = logic(a,b,c);
    printf("Smallest Value among them:- %d",result);
}

int logic(int a,int b, int c){

    printf("Calculating....\n");

    if(a<b && a<c){
        return a;
    }else if (b<a && b<c)
    {
        return b;
    }else{
        return c;
    }
    
}

