#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    char numbs[42];
    char *dictionary;

    dictionary = "numbers.dict";

    if (argc == 2)
    {
        snprintf(numbs, sizeof(numbs), "%s", argv[1]);  // Copy the string to numbs
    }
    else if (argc == 3)
    {
        dictionary = argv[1];
        snprintf(numbs, sizeof(numbs), "%s", argv[2]);  // Copy the string to numbs
    }
    else
    {
        printf("ERRORRRR");
        return 1;
    }

    printf("Dictionary: %s\n", dictionary);
    printf("Number: %s\n", numbs);
    return 0;
}
