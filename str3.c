#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int i,flag=0,n=strlen(s);
    for(i=0;i<n/2;i++)
        if(s[i]!=s[n-1-i]){
            flag=1;
            break;
        }
    if(flag==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
