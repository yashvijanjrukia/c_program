#include <stdio.h>
int main(){
    int a[10],b[10],i,n,dir;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    scanf("%d%d",&n,&dir);
    if(dir==1){
        for(i=0;i<10;i++){
            if(i+n<10) b[i]=a[i+n];
            else b[i]=0;
        }
    }else{
        for(i=9;i>=0;i--){
            if(i-n>=0) b[i]=a[i-n];
            else b[i]=0;
        }
    }
    for(i=0;i<10;i++)
        printf("%d ",b[i]);
    return 0;
}
