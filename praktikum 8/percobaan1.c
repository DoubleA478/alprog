#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char sentence[256];
    char reverse[256];
    printf("Kalimat:");
    scanf("%255[^\n]", sentence);

    int len = strlen(sentence);

    for (int i = 0; i < len; i++)
    {
        reverse[i] = sentence[len - i - 1];
    }

    if (strcmp(sentence, reverse) == 0)
    {
        printf("Termasuk PALINDROM\n");
    }
    else
    {
        printf("Bukan PALINDROM\n");
    }

    return 0;
}
