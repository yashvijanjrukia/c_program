#include <stdio.h>
int main(){
    int i,b=0,g=0;
    char sex;
    for(i=1;i<=50;i++){
        scanf(" %c",&sex);
        if(sex=='M' || sex=='m')
            b++;
        else if(sex=='F' || sex=='f')
            g++;
    }
    printf("Boys=%d Girls=%d",b,g);
    return 0;
}
