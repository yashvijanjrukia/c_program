#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int i;
    for(i=strlen(s)-1;i>=0;i--)
        printf("%c\n",s[i]);
    return 0;
}
