#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string names;
    string numbers;
}
person;

int main(void)
{
    person people[2];

    people[0].names = "Matthew";
    people[0].numbers = "+1-777-777-7777";

    people[1].names = "Robin";
    people[1].numbers = "+1-555-555-5555";

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if(strcmp(people[i].names, name) == 0)
        {
            printf("Found %s\n %s\n", people[i].names, people[i].numbers);
            return 0;
        }
    }
    printf("Not found.\n");
    return 1;
}