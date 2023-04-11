#include <stdio.h>

int main(int argc, char const *argv[])
{
    int col, row;

    printf("Masukkan jumlah baris:");
    scanf("%i", &row);
    printf("Masukkan jumlah kolom:");
    scanf("%i", &col);
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int i = 0; i < col; i++)
        {
            printf("A ");
        }
        printf("\n");
    }

    return 0;
}
