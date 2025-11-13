#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    int lines=0, words=0, chars=0, spaces=0, inWord=0;
    fp = fopen("input.txt","r");
    if(fp==NULL) {
        printf("File not found");
        return 0;
    }
    while((ch=fgetc(fp))!=EOF) {
        chars++;
        if(ch==' '||ch=='\t') {
            spaces++;
            inWord=0;
        } else if(ch=='\n') {
            lines++;
            inWord=0;
        } else if(!inWord) {
            inWord=1;
            words++;
        }
    }
    fclose(fp);
    printf("Lines=%d Words=%d Chars=%d Spaces=%d", lines, words, chars, spaces);
    return 0;
}
