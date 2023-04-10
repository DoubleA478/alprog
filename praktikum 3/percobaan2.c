#include <stdio.h>

int main(int argc, char const *argv[])
{
    int loop = 1, counter = 1, total = 0;
    while (loop)
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
            loop = 0;
        }
        printf("\n");
        counter++;
    }
    printf("Total bilangan = %i\n", total);
    return 0;
}
