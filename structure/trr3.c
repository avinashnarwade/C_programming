#include<stdio.h>

struct form {
    char name[20];
    char mobile[15];
    char email[15];
    float age;
};


struct form inputvlues()
{
    struct form c;

    printf("Enter Name:-\n");
    scanf("\n");
    fgets(c.name,sizeof(c.name),stdin);

    printf("Enter mobile:- \n");
    fgets(c.mobile,sizeof(c.mobile),stdin);
    printf("Enter Email:-\n");
    scanf("%s",c.email);
    printf("Enter age:-\n");
    scanf("%f",&c.age);

    return c;

}

void printValue(struct form c)

{
    printf("Entered values\n");
    printf("%s\n",c.name);
    printf("%s\n",c.mobile);
    printf("%s\n",c.email);
    printf("%f\n",&c.age);
}

void main()
{

    struct form rakesh = inputvlues();
    printValue(rakesh);

    struct form sham = inputvlues();
    printValue(sham);

}