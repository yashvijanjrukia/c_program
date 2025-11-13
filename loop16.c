#include <stdio.h>
int main(){
    int i;
    float n,max,min;
    scanf("%f",&n);
    max=min=n;
    for(i=2;i<=100;i++){
        scanf("%f",&n);
        if(n>max) max=n;
        if(n<min) min=n;
    }
    printf("Largest=%.2f Smallest=%.2f",max,min);
    return 0;
}
