#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, total = 0;
    printf("Masukkan integer positif :");
    scanf("%i", &num);
    if (num <= 0)
    {
        printf("Masukkan integer positif\n");
        return 1;
    }
    for (int i = 1; i <= num; i++)
    {
        total += i;
    }
    printf("Jumlah 1 sampai %i=%i\n", num, total);

    return 0;
}
