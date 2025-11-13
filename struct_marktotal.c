#include <stdio.h>

struct student_data {
    int roll;
    char name[50];
    float phy, math, chem, total;
};

int main() {
    struct student_data s;
    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    getchar();
    printf("Enter Name: ");
    gets(s.name);
    printf("Enter marks (Physics, Maths, Chemistry): ");
    scanf("%f%f%f", &s.phy, &s.math, &s.chem);
    s.total = s.phy + s.math + s.chem;
    printf("\nRoll: %d\nName: %s\nPhysics: %.2f\nMaths: %.2f\nChemistry: %.2f\nTotal: %.2f",
           s.roll, s.name, s.phy, s.math, s.chem, s.total);
    return 0;
}
