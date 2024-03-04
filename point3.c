#include <stdio.h>

int main()
{
    float price, *ptr;

    ptr = &price;
    *ptr = 99.34;

    printf("The price is $%.2f\n",price);
}