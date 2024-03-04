#include <stdio.h>

int main()
{
    char a;
    printf("Your choice (A,B,C): ");
    scanf("%c",&a);

    switch(a)
    {
        case 'A':
            puts("Exceleent Choice");
            break;
        case 'B':
            printf("Choosen %c - avarage choice",a);
            break;
        case 'C':
            puts("I QUEstion your decision.");
            break;
        default:
            printf("Not choosen the above try agin");
    }
}