#include <stdio.h>
#include <string.h>

struct cricketer {
    char name[50];
    int age;
    int matches;
    float avg;
};

int main() {
    struct cricketer c[10], temp;
    int i, j;
    for(i=0;i<10;i++) {
        printf("Enter Name, Age, Matches, Average: ");
        gets(c[i].name);
        scanf("%d%d%f", &c[i].age, &c[i].matches, &c[i].avg);
        getchar();
    }
    for(i=0;i<9;i++)
        for(j=i+1;j<10;j++)
            if(c[i].avg > c[j].avg) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
    printf("\nCricketers sorted by average runs:\n");
    for(i=0;i<10;i++)
        printf("%s\t%d\t%d\t%.2f\n", c[i].name, c[i].age, c[i].matches, c[i].avg);
    return 0;
}
