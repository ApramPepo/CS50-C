#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }

    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    for (int i = 0; i < strlen(s) + 1; i++)
    {
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);
    s[1] = toupper(s[1]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    return 0;
}