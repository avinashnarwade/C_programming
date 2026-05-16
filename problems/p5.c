#include<stdio.h>

void main(){
    char *ptr;
    char str[]="Hello";
    ptr = str;
    ptr = ptr + 2;
    printf("%s",ptr);
}