#include <stdio.h>

int main()
{
    int a;
    printf("Type an interger: ");
    scanf("%d", &a);
    if(a > 10)
        printf("%d is greater than 10",a);
    else
        printf("%d is not greater than 10",a);
}