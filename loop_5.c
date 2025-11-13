#include <stdio.h>
int main(){
    int i,n,num=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",num);
        num+=2;
    }
    return 0;
}
