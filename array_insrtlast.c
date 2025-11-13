#include <stdio.h>
int main() {
    int a[100], n, num, i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter number to insert: ");
    scanf("%d",&num);
    a[n]=num;
    n++;
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
