#include <stdio.h>

int main(int argc, char const *argv[])
{
    char choice;
    while (1)
    {
        printf("Anda sudah sholat?\?(s/b) ");
        scanf(" %c", &choice);
        if (choice >= 'a' && choice <= 'z')
        {
            choice = choice - 32;
        }
        if (choice == 'B' || choice == 'S')
        {
            break;
        }
    }
    switch (choice)
    {
    case 'S':
        printf("Bagus!\n");
        break;

    case 'B':
        printf("Sholat adalah ibadah\n");
        break;

    default:
        break;
    }

    return 0;
}
