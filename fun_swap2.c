#include <stdio.h>
void swap(int x,int y) {
    int t;
    t=x; x=y; y=t;
    printf("Inside function: a=%d b=%d\n",x,y);
}
int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("Outside function: a=%d b=%d",a,b);
    return 0;
}
