#include <stdio.h>

int main()
{
    char *president[5]=
    {
        "Mwai Kibaki",
        "Uhuru Kenyatta",
        "William Ruto"
    };
    int x;
    char *ptr;

    for(x=0;x<5;x++)
    {
        ptr = president[x];
        while(*ptr)
        {
            putchar(*ptr);
            ptr++;
        }
        putchar('\n');
    }
}