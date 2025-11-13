#include<stdio.h>
#include<string.h>

int main(){
 char str[100],rev[100];

 printf("enter a string");
 scanf("%s",str);
 
 strcpy(rev, str);

 strrev(rev);

 if (strcmp(str,rev)==0){
    printf("%s is palidrome\n",str);
 }else{
    printf("%s is not palidrome\n",str);
 }
 return 0;

}