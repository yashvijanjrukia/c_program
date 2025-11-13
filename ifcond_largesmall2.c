#include<stdio.h>

int main(){

int i;
float num,largest,smallest;

scanf("%f",&num);
largest=smallest=num;

for(i=1; i<100; i++){
    scanf("%f",&num);

    if(num>largest){
        largest=num;
    }
    if(num<smallest){
smallest=num;

    }
}
printf("largest=%f",largest);
printf("smallest=%f",smallest);


return 0;
}