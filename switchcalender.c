#include<stdio.h>

void main(){
    int Day;

    printf("Enter Day value:- ");
    scanf("%d",&Day);


    switch(Day){
        case 0:
        printf("Sunday");
        break;

        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wedensday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saterday");
        break;

        default:
        printf("Enter valid input");
        break;
    }

}