#include <stdio.h>
#include <string.h>
int main(){
    char s[200];
    int i,a=0,e=0,i1=0,o=0,u=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='A') a++;
        else if(s[i]=='e'||s[i]=='E') e++;
        else if(s[i]=='i'||s[i]=='I') i1++;
        else if(s[i]=='o'||s[i]=='O') o++;
        else if(s[i]=='u'||s[i]=='U') u++;
    }
    printf("A=%d E=%d I=%d O=%d U=%d",a,e,i1,o,u);
    return 0;
}
