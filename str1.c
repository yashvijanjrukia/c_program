#include <stdio.h>
#include <string.h>
int main(){
    char s1[100],s2[100];
    scanf("%s%s",s1,s2);
    int cmp = strcmp(s1,s2);
    if(cmp==0)
        printf("Both strings are same");
    else if(cmp>0)
        printf("First string is greater");
    else
        printf("Second string is greater");
    return 0;
}
