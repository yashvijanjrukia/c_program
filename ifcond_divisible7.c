#include<stdio.h>

int main (){

    int num;
    printf("enter a number:");
    scanf("%d",&num);

    if (num%7 != 0)
    {
        printf("number is not divisible by 7");
    }else if (num%7 == 0)
    {
    printf("number is divisible by 7");
    }
    
    
return 0;
}