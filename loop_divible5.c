#include <stdio.h>

int main() {

int i,sum=0;
for(i = 1; i <= 100; i++)
{
    if(i % 5 == 0)
sum = sum + i ;
}

printf("sum of integer divisible by 5 = %d",sum);

return 0;
}