#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What is x?\n");
    int y = get_int("What is y?\n");

if (x < y)
{
    printf("X is less than Y\n");
}
else if(x > y)
{
    printf("X is more than Y\n");
}
else {
    printf("X and Y are Equal\n");
}

}