#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree with the following? ");


    if (c == 'y' || c == 'Y')
    {
        printf("Agree!\n");
    }
    else if (c == 'n' || c == 'N') {
        printf("Disagree!\n");
    }
}