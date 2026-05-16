// #include<stdio.h>

// int main(){
//     reverse(1);
// }
// void reverse(int i){
//   if (i>5)
//   exit();
//   printf("%d\n",i);
//   return reverse(i++);
// }


#include<stdio.h>

void reverse(int i){
    reverse(1);
}

void reverse(int i){
    if(i > 5)
       exit(0);
    printf("%d\n",i);
    reverse(++i);

}