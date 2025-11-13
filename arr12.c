#include <stdio.h>
int main(){
    int a[11],n,i,val;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&val);
    for(i=n;i>0;i--)
        a[i]=a[i-1];
    a[0]=val;
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}
