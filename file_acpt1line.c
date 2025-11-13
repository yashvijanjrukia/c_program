#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;
    char line[200];
    fp = fopen("data.txt","w");
    if(fp==NULL) return 0;
    while(1) {
        printf("Enter a line (type END to stop): ");
        gets(line);
        if(strcmp(line,"END")==0) break;
        fputs(line, fp);
        fputs("\n", fp);
    }
    fclose(fp);
    return 0;
}
