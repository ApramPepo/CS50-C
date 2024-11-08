#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number[] = {30, 1000, 1, 10, 5, 50, 100, 200};

    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (number[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Program stopped, Not found\n");
    return 1;
    
}