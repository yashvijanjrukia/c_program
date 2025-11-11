#include <stdio.h>

int main() {
    float s1, s2, s3, total, average;
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    total = s1 + s2 + s3;
    average = total / 3;
    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);
    return 0;
}
