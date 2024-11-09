#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Matthew", "Robin"};
    string numbers[] = {"+1-777-777-7777", "+1-555-555-5555"};

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if(strcmp(names[i], name) == 0)
        {
            printf("Found %s\n %s\n", names, numbers);
            return 0;
        }
    }
    printf("Not found.\n");
    return 1;
}