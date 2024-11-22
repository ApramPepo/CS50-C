#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a = malloc(3 * sizeof(int));
    if (a == NULL)
    {
        return 1;
    }
    a[0] = 72;
    a[1] = 73;
    a[2] = 33;

    free(a);
    return 0;
}