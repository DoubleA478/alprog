#include <stdio.h>

int main(int argc, char const *argv[])
{
    int loop = 1;
    while (loop)
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
            loop = 0;
        }
    }
    return 0;
}
