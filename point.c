#include <stdio.h>

int main()
{
    int pockey;
    int *p;

    p = &pockey;
    printf("The address of the pokey is %p\n", &pockey);
    printf("The address of p is %p\n", p);

    return 0;
}