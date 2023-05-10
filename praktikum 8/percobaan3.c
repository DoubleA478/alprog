#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string0[256], string1[256];
    printf("Masukkan string pertama:");
    scanf(" %255[^\n]", string0);
    printf("Masukkan string kedua:");
    scanf(" %255[^\n]", string1);

    if (strcmp(string0, string1) == 0)
    {
        printf("kedua string sama\n");
    }
    else
    {
        printf("kedua string tidak sama\n");
    }
    return 0;
}
