#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p = (int *)malloc(sizeof(int));
    int *g = p;
    free(p);
    *g = 10;
    printf("%d",*g);
    return(0);

}
