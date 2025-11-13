#include <stdio.h>
int main(){
    int i;
    float n,sum=0,mean;
    for(i=1;i<=10;i++){
        scanf("%f",&n);
        sum+=n;
    }
    mean=sum/10;
    printf("Sum=%.2f Mean=%.2f",sum,mean);
    return 0;
}
