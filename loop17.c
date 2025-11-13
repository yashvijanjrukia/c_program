#include <stdio.h>
int main(){
    int i,pos=0,neg=0,zero=0;
    float n;
    for(i=1;i<=200;i++){
        scanf("%f",&n);
        if(n>0) pos++;
        else if(n<0) neg++;
        else zero++;
    }
    printf("Positive=%d Negative=%d Zero=%d",pos,neg,zero);
    return 0;
}
