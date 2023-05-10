#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string[256];
    printf("Insert String:");
    scanf("%255[^\n]", string);
    int size = strlen(string);
    for (int i = 0; i < size; i++)
    {
        if (string[i] == 'a')
        {
            string[i] = 'i';
        }
    }

    printf("%s\n", string);
    return 0;
}
