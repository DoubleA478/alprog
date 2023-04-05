#include <stdio.h>

int main(int argc, char const *argv[])
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
                printf("Minggu");
            }
            else
            {
                printf("Senin");
            }
        }
        else
        {
            printf("Selasa");
        }
    }
    else
    {
        if (number <= 5)
        {
            if (number <= 4)
            {
                printf("Rabu");
            }
            else
            {
                printf("Kamis");
            }
        }
        else
        {
            if (number <= 6)
            {
                printf("Jum'at");
            }
            else
            {
                printf("Sabtu");
            }
        }
    }

    return 0;
}
