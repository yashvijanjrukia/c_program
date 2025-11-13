#include <stdio.h>
int power(int a, int b) {
    int p=1, i;
    for(i=1;i<=b;i++) p*=a;
    return p;
}
int main() {
    int a,b;
    printf("Enter base and exponent: ");
    scanf("%d%d",&a,&b);
    printf("Result = %d", power(a,b));
    return 0;
}
