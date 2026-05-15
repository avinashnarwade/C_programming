#include<stdio.h>
#include<string.h>

union form {
    char name[20];
    char mobile[15];
    char email[15];
    float age;
};

struct form1{ //structure creation 
    char name[20];
    char mobile[15];
    char email[15];
    float age;
};

void main(){

    union form rakesh; //variable creation 
    struct form1 ram;

    printf("%ld\n",sizeof(rakesh));
    printf("%ld\n",sizeof(ram));

    // rakesh.age = 21;
    // // rakesh.name = "Rakesh";
    // strcpy(rakesh.name,"Rakesh");
    // strcpy(rakesh.mobile,"123456789"); 
    // strcpy(rakesh.email,"rakesh@gmail.com");
}