#include <stdio.h>
int main(){
    int n,a=0,b=1,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",b);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
