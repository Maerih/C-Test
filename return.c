#include <stdio.h>

char game(void);

int main()
{
    printf("On the test recieved %C.\n",game());

    return 0;
}

char game(void)
{
    return ('A');
}