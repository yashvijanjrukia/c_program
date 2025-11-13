#include <stdio.h>
int main(){
    int i,n,num=2,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=num;
        num+=2;
    }
    printf("%d",sum);
    return 0;
}
