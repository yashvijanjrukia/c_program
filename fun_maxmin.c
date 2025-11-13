#include <stdio.h>
void findMinMax(int a[],int n,int *min,int *max) {
    int i;
    *min=*max=a[0];
    for(i=1;i<n;i++) {
        if(a[i]>*max) *max=a[i];
        if(a[i]<*min) *min=a[i];
    }
}
int main() {
    int a[100],n,i,min,max;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    findMinMax(a,n,&min,&max);
    printf("Min=%d Max=%d",min,max);
    return 0;
}
