#include<stdio.h>

void main(){

    int num = 10;

    //syntax- datatype *pointer_name;

    int *ptr = &num; //pointer creation 

    printf("The Value of num:- %d\n",num);
    printf("The address of num:-%p\n",&num);
    printf("The value of num from ptr variable:-%d\n",*ptr);
    printf("The address of pointer:-%p\n",ptr);
}