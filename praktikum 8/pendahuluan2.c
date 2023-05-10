#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[256];
    printf("Masukkan nama dalam huruf besar:");
    fgets(name, 256, stdin);
    int i = 0;

    while (name[i] != '\0')
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
        }
        i++;
    }

    int len = strlen(name);

    for (i = 0; i < len / 2; i++)
    {
        char temp = name[i];
        name[i] = name[len - i - 1];
        name[len - i - 1] = temp;
    }

    printf("%s\n", name);
    return 0;
}
