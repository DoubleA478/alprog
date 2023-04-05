#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    printf("Hari ke..:");
    scanf("%i", &number);
    if (number == 1)
    {
        printf("Minggu\n");
    }
    else if (number == 2)
    {
        printf("Senin\n");
    }
    else if (number == 3)
    {
        printf("Selasa\n");
    }
    else if (number == 4)
    {
        printf("Rabu\n");
    }
    else if (number == 5)
    {
        printf("Kamis\n");
    }
    else if (number == 6)
    {
        printf("Jum'at\n");
    }
    else if (number == 7)
    {
        printf("Sabtu\n");
    }
    else
    {
        printf("Hari tidak valid\n");
        return 1;
    }
    return 0;
}
