#include<stdio.h>

int main(){

    float P,N,R,I;

    printf("enter principal amount:");
    scanf("%f",&P);

     printf("enter rate of interest:");
    scanf("%f",&R);
    
     printf("enter Time in years (N):");
    scanf("%f",&N);

    I=(P*N*R)/100;
 
    printf("%f\n",I);
    return 0;
}