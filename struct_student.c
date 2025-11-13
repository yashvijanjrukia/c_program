#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

void printAll(struct student s[], int n) {
    int i;
    for(i=0;i<n;i++)
        printf("%s\n", s[i].name);
}

void printByRoll(struct student s[], int n, int r) {
    int i, found=0;
    for(i=0;i<n;i++) {
        if(s[i].roll==r) {
            printf("Roll: %d\nName: %s\nCourse: %s\nMajor: %s\nMinor: %s\n", 
                   s[i].roll, s[i].name, s[i].course, s[i].major, s[i].minor);
            found=1;
            break;
        }
    }
    if(!found) printf("Student not found\n");
}

int main() {
    struct student s[10];
    int i, roll;
    for(i=0;i<10;i++) {
        printf("Enter Roll, Name, Course, Major, Minor: ");
        scanf("%d", &s[i].roll);
        getchar();
        gets(s[i].name);
        gets(s[i].course);
        gets(s[i].major);
        gets(s[i].minor);
    }
    printf("\nAll Students:\n");
    printAll(s,10);
    printf("\nEnter Roll to search: ");
    scanf("%d",&roll);
    printByRoll(s,10,roll);
    return 0;
}
