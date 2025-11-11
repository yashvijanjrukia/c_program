#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("enter fahrenheit value:");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("%ffahrenheit=%fcelsius\n",fahrenheit,celsius);

    return 0;
}