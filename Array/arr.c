#include<stdio.h>

void main(){
    // syntax:- data type array_name[size];


    // int class10th[10] = {11,12,13,14,15,16,17,18,19,20};
    //                    //0  1  2  3  4  5  6  7  8  9
                     

    // printf("%d\n",class10th[0]);


    // user input in array


    int myarry[5];
    //0 1 2 3 4 
    for(int i=0;i<5;i++){
        printf("Enter the %d index value:-",i);
        scanf("%d",&myarry[i]);
    }
    printf("The entered values is :- \n");
    for(int i=0;i<5;i++){
        printf("The %d index value is %d\n",i,myarry[i]);
    }
}