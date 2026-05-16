#include<stdio.h>

void main(){
    int arr[5] = {1,2,3,4,5};

    int *ptr = &arr[0];

    printf("%p\n",ptr);
    printf("value at %d\n",*ptr);

    ptr = ptr + 2;

    printf("%p\n",ptr);
    printf("value at %d\n",*ptr);
}