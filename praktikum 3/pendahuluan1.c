#include <stdio.h>

int main(int argc, char const *argv[])
{
    while (1)
    {
        int num, div, remain;
        char choice;
        printf("masukkan suatu bilangan\n");
        scanf("%i", &num);
        printf("masukkan bilangan pembagi(2/3/4/5)\n");
        scanf("%i", &div);
        printf("bilangan yang dipilih:%i\n", num);
        printf("bilangan pembagi:%i", div);
        if (num % div == 0)
        {
            printf("tidak ada\n");
        }
        else
        {
            printf("ada\n");
        }
        printf("apakah anda ingin meneruskan(Y/n) ");
        scanf(" %c", &choice);
        if (choice >= 'a' && choice <= 'z')
        {
            choice = choice - 32;
        }
        if (choice == 'N')
        {
            break;
        }
    }
    return 0;
}
