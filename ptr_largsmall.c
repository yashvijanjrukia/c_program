#include <stdio.h>
int main() {
    int a[3][3], *p, i;
    printf("Enter 9 elements:\n");
    for(i=0;i<9;i++) scanf("%d", &a[0][i]);
    p=&a[0][0];
    int max=*p, min=*p;
    for(i=0;i<9;i++){
        if(*(p+i)>max) max=*(p+i);
        if(*(p+i)<min) min=*(p+i);
    }
    printf("Largest=%d Smallest=%d", max, min);
    return 0;
}

