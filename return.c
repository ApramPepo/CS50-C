#include <stdio.h>

int main(int argc, const char* argv[])
{
    if (argc != 2)
    {
        printf("Missing user Command-Line input\n");
        return 1;
    }
    else
    {
        printf("Hello, %s!\n", argv[1]);
        return 0;
    }
    
}