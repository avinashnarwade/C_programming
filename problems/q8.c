
#include<stdio.h>
int main(){
    int x=2,y=0;
    int z;
    z = (y++,y);
    printf("%d\n",z);
    return 0;
}