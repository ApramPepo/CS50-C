#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = get_string("S: ");
    char *t = get_string("T: ");

    if (strcmp(s, t) == 0)
    {
        printf("They are the same!\n");
    }
    else
    {
        printf("Lol, sike!\n");
    }
}