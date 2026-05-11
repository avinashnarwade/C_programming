#include<stdio.h>

int fact(int);

int fact(int n){
    // base condition 
    if(n == 1){
        return 1;
    }else{
        return n * fact(n-1);
        // 4 * fact (3)
    }
}

void main(){
    int n = 4;
    int res = fact(n);
    printf("the factorial of %d is %d\n",n,res);

}