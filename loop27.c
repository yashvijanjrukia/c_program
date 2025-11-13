#include <stdio.h>
#include <math.h>
int main(){
    int n,sq,temp,p=1;
    scanf("%d",&n);
    sq=n*n;
    temp=n;
    while(temp>0){
        p*=10;
        temp/=10;
    }
    if(sq%p==n)
        printf("Automorphic");
    else
        printf("Not Automorphic");
    return 0;
}
