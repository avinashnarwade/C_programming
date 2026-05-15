#include<stdio.h>


struct form 
{
    char name[20];
    char mobile[15];
    char email[15];
    float age;
};

void main(){
    
    struct form rakesh;

    fgets(rakesh.name,sizeof(rakesh.name),stdin);
    fgets(rakesh.mobile,sizeof(rakesh.mobile),stdin);
    scanf("%s",rakesh.email);
    scanf("%f",&rakesh.age);

    printf("Entered Values\n");
    printf("%s\n",rakesh.name);
    printf("%s\n",rakesh.mobile);
    printf("%s\n",rakesh.email);
    printf("%f\n",rakesh.age);

    
    
}