// // A B C D E F G

// #include<stdio.h>
// #include<string.h>

// void main(){
//     char s1[] = "Last Moment";
//     char s2[] = " Tuitions";

//     strcat(s1,s2);
//     printf("%s\n", s1);

// } 


// #include<stdio.h>
// #include<string.h>

// void main(){
//     char s1[] = "Last Moment";
//     char s2[] = " Tuition";

//     printf("%ld\n",strlen(s1));
// }


// #include<stdio.h>
// #include<string.h>

// void main(){
//     char s1[] = "Last Moment";
//     char s2[20];

//     strcpy(s2,s1);
//     printf("%s\n",s2);
// }

// #include<stdio.h>
// #include<string.h>

// void main(){
//     char s1[]="Last Moment Tuitions";
//     char s2[20];
//     printf("%s\n",strchr(s1,'o'));
// }


// #include<stdio.h>
// #include<string.h>

// void main(){
//     char s1[]="Last Moment Tuitions";
//     char s2[20];

//     printf("%s\n",strrchr(s1,'o'));
// }


// #include<stdio.h>
// #include<string.h>

// void main(){
//     char s1[] = "Last Moment Tuitions";
//     char s2[20];
//     printf("%s\n",strstr(s1,"Moment"));

// }


#include<stdio.h>
#include<string.h>

void main(){
    char s1[]="lmt";
    char s2[]="lat";

    int result = strcmp(s1,s2);

    printf("%d",result);
}