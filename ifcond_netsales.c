#include <stdio.h>

int main() {
    float gross, allowance, deduction, net;
    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if (gross > 1000)
    {
        allowance=0.10*gross;
        deduction=0.03*gross;
    }else if (gross>5000)
    {
        allowance=0.07*gross;
        deduction=0.02*gross;
    }else
    {
        allowance=0;
        deduction=0;
    }
    
    net=gross+allowance-deduction;
    printf("net salary=%2f\n",net);

    return 0;
}