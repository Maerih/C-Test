#include <stdio.h>
#include <string.h>


int main()
{
    char fullname[64];
    char firstname[32];
    char lastname[32];

    printf("Your First name: ");
    fgets(firstname,32,stdin);
    printf("Your last name: ");
    fgets(lastname,32,stdin);
    
    strcpy(fullname, firstname);
    strcat(fullname, lastname);

    printf("Your full name is %s:", fullname);

    return 0;
}