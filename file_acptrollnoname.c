#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;
    int roll;
    char name[50];
    char choice;
    fp = fopen("students.csv","w");
    if(fp==NULL) return 0;
    fprintf(fp,"Roll No,Name\n");
    do {
        printf("Enter Roll No: ");
        scanf("%d",&roll);
        getchar();
        printf("Enter Name: ");
        gets(name);
        fprintf(fp,"%d,%s\n",roll,name);
        printf("Add another record? (y/n): ");
        scanf(" %c",&choice);
        getchar();
    } while(choice=='y'||choice=='Y');
    fclose(fp);
    printf("Data saved in students.csv");
    return 0;
}
