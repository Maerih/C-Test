#include <stdio.h>

int main()
{
    struct bank
    {
        int account;
        float balance;
    };
    struct bank checking, savings;

    checking.account = 12354;
    checking.balance = 500;
    savings.account =858;
    savings.balance= 44.5;

    printf("Checking account %d has balance of %f \n",checking.account, checking.balance);

    printf("Saving account %d has balance of %f", savings.account,savings.balance);
}