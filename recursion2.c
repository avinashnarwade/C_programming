#include<stdio.h>

int revr(int);

int revr(int n){
    if(n==3){
        break;
    }else{
        printf("%d\n",&n);
    }
}
void main(){
    int n = 10;
    int res = revr(n);
    printf("The reverse numbers are:- %d\n",n,res);

}