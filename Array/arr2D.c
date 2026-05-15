#include<stdio.h>

void main()
{
    int a[3][3];

    for (int i = 0; i<=3;i++){
        //row i=1 
        for (int j = 0; j<=3;j++){
            scanf("%d",&a[i][j]);
            //a[0][2]
        }
    }


    for (int i=0; i<=3; i++)
    {
        for (int j = 0; j <=3; j++){
            // columns j = 0

            printf("%d",a[i][j]);
            // a[0][2]
        }
        printf("\n");
    }
}