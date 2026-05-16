#include<stdio.h>

struct XYZ{
    int a;
    struct XYZ *next;
};

int main(){
    struct XYZ temp;
    temp.a = 10;
    temp.next = NULL;

    printf("%d",temp.a);
    printf("%d",temp.next);
    return 0;
}