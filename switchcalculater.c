#include<stdio.h>
void main(){
    int a,b,choice;

    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("Press 1 for Add\n");
    printf("Press 2 for Sub\n");
    printf("Press 3 for Mul\n");
    printf("Press 4 for Div\n");
    printf("Press 5 for Modulus\n");
    printf("Enter Choice:- ");
    scanf("%d",&choice);


    switch(choice){
        case 1 :
            printf("The sum of two number is:- %d \n",a+b);
            break;
        case 2 :
            printf("The sub of two number is:- %d \n",a-b);
            break;
        case 3 :
            printf("The mul of two number is:- %d \n",a*b);
            break;
        case 4 :
            printf("The Div of two number is:- %d \n",a/b);
            break;
        case 5 :
            printf("The modulus of two number is:- %d \n",a%b);
            break;

        default:
            printf("Invalid Input");
    }

}