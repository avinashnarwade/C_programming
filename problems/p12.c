#include<stdio.h>

void g(int *x,int *y){
    //112    113
    y = x; //y = 112
    *y = 3; 
}

int a = 1,b = 2; //a = 3,b = 2
int main(){
    g(&a,&b);  //lets we assume 112,113
    printf("%d %d\n",a,b);
    return 0;
}
