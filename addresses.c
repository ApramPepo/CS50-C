#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = "HI!";
    char *p = &*s;
    printf("%p\n", p);
}


