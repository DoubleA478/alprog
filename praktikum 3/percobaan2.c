#include <stdio.h>

int main(int argc, char const *argv[])
{
    int counter = 1, total = 0;
    while (1)
    {
        int num;
        char choice;
        printf("Masukkan bilangan ke-%i : ", counter);
        scanf("%i", &num);
        total += num;
        printf("Mau memasukkan data lagi(Y/n) ");
        scanf(" %c", &choice);
        if (choice >= 'a' && choice <= 'z')
        {
            choice = choice - 32;
        }
        if (choice == 'N')
        {
            printf("\n");
            break;
        }
        printf("\n");
        counter++;
    }
    printf("Total bilangan = %i\n", total);
    return 0;
}
