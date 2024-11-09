#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"han", "george", "hawk", "adam", "Jenny"};

    string n = get_string("Name: ");
    for (int i = 0; i < 5; i++)
    {
        if (names[i] == n)
        {
            printf("Name is found\n");
            return 0;
        }
    }
    printf("Name was not found.\n try again.\n");
    return 1;
}