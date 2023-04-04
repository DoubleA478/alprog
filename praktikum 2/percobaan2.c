#include <stdio.h>

int main()
{
    char huruf;
    int angka;
    printf("Masukkan nilai huruf:");
    scanf("%c", &huruf);
    if (huruf >= 'a' && huruf <= 'z')
    {
        huruf = huruf - 32;
    }
    switch (huruf)
    {
    case 'A':
        angka = 4;
        break;

    case 'B':
        angka = 3;
        break;

    case 'C':
        angka = 2;
        break;

    case 'D':
        angka = 1;
        break;

    case 'E':
        angka = 0;
        break;

    default:
        printf("huruf yang anda masukkan salah\n");
        return 1;
        break;
    }
    printf("Nilai angka %d\n", angka);
    return 0;
}
