#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(4 * sizeof(int));
    if (list == NULL)
    {
        printf("aborted\n");
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);;
    }
    return 0;
}