#include <stdio.h>
int main(){
    int i,n;
    float val,sum=0,mean;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%f",&val);
        sum+=val;
    }
    mean=sum/n;
    printf("Sum=%.2f Mean=%.2f",sum,mean);
    return 0;
}
