#include <stdio.h>
int main() {
    int a[4][4], b[16], *p, i, j, k=0, temp;
    printf("Enter 16 elements:\n");
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            scanf("%d", (*(a+i)+j));
    p = &a[0][0];
    for(i=0;i<16;i++) b[i] = *(p+i);
    for(i=0;i<15;i++)
        for(j=i+1;j<16;j++)
            if(b[i]>b[j]){ temp=b[i]; b[i]=b[j]; b[j]=temp; }
    for(i=0;i<16;i++) printf("%d ", b[i]);
    return 0;
}
