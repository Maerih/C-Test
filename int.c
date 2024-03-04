#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch='a';

    printf("Original %c\n",ch);
    printf("LowerCase %c\n", tolower(ch));
    printf("UpperCase %c",toupper(ch));

    return 0;
}