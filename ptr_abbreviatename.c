#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    char *p=name;
    int i,len;
    printf("Enter full name: ");
    gets(name);
    len=strlen(name);
    printf("Abbreviated: ");
    printf("%c. ", *p);
    for(i=0;i<len;i++){
        if(*(p+i)==' ' && *(p+i+1)!='\0'){
            if(strchr(p+i+1,' ')==NULL)
                printf("%s", p+i+1);
            else
                printf("%c. ", *(p+i+1));
        }
    }
    return 0;
}
