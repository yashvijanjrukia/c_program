#include <stdio.h>
int main() {
    char b1[100], b2[100], b3[100];
    char *books[3] = {b1, b2, b3};
    int i;
    for(i=0;i<3;i++) {
        printf("Enter book name %d: ", i+1);
        gets(books[i]);
    }
    printf("\nBook Names:\n");
    for(i=0;i<3;i++)
        printf("%s\n", books[i]);
    return 0;
}
