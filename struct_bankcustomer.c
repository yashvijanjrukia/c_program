#include <stdio.h>
#include <string.h>

struct customer {
    int acc;
    char name[50];
    float bal;
};

void lowBalance(struct customer c[], int n) {
    int i;
    printf("Customers with balance below 100:\n");
    for(i=0;i<n;i++)
        if(c[i].bal < 100)
            printf("Acc No: %d, Name: %s\n", c[i].acc, c[i].name);
}

void update(struct customer c[], int n, int acc, float amt, int code) {
    int i, found=0;
    for(i=0;i<n;i++) {
        if(c[i].acc==acc) {
            found=1;
            if(code==1) {
                c[i].bal += amt;
                printf("Deposited. New Balance = %.2f\n", c[i].bal);
            } else {
                if(c[i].bal < amt)
                    printf("Balance insufficient for withdrawal\n");
                else {
                    c[i].bal -= amt;
                    printf("Withdrawn. New Balance = %.2f\n", c[i].bal);
                }
            }
            break;
        }
    }
    if(!found) printf("Account not found\n");
}

int main() {
    struct customer c[10];
    int i, acc, code;
    float amt;
    for(i=0;i<10;i++) {
        printf("Enter AccNo, Name, Balance: ");
        scanf("%d", &c[i].acc);
        getchar();
        gets(c[i].name);
        scanf("%f", &c[i].bal);
    }
    lowBalance(c,10);
    printf("\nEnter Account, Amount, Code(1=deposit,0=withdraw): ");
    scanf("%d%f%d",&acc,&amt,&code);
    update(c,10,acc,amt,code);
    return 0;
}
