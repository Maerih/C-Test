#include <stdio.h>
#include <string.h>

int main()
{
    struct date 
    {
        int year;
        int month;
        int day;
    };
    struct person
    {
        char name[32];
        struct date birthday;
    };
    struct person friend;

    strcpy(friend.name, "David Maeri");
    friend.birthday.year = 2002;
    friend.birthday.day = 22;
    friend.birthday.month = 11;

    printf("I %s was born on %d  %d\n", friend.name,friend.birthday.month,friend.birthday.year);

    return 0;
}