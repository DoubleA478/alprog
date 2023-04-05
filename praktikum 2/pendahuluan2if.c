#include <stdio.h>

int main()
{
    int number;
    printf("Hari ke...:");
    scanf("%i", &number);
    if (number < 4)
    {
        if (number <= 2)
        {
            if (number <= 1)
            {
                printf("Minggu\n");
            }
            else
            {
                printf("Senin\n");
            }
        }
        else
        {
            printf("Selasa\n");
        }
    }
    else
    {
        if (number <= 5)
        {
            if (number <= 4)
            {
                printf("Rabu\n");
            }
            else
            {
                printf("Kamis\n");
            }
        }
        else
        {
            if (number <= 6)
            {
                printf("Jum'at\n");
            }
            else
            {
                printf("Sabtu\n");
            }
        }
    }

    return 0;
}
