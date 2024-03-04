#include <stdio.h>
#include <ctype.h>

char *encrypt(char *input);

int main()
{
    char *instruction = "Deliver the package to Nairobi";
    printf("Secret instructions:\n%s\n", encrypt(instruction));
    return 0;
}

char *encrypt(char *input)
{
    static char output[64];
    int x =0;

    while(*input)
    {
        if(isalpha(*input))
            output[x] = *input +1;
        else
            output[x] = *input;
        x++;
        input++;
    }
    return output;
}