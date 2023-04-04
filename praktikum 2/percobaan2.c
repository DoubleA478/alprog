#include <stdio.h>

int main()
{
    char letter;
    int number;
    printf("Masukkan nilai huruf:");
    scanf("%c", &letter);
    if (letter >= 'a' && letter <= 'z')
    {
        letter = letter - 32;
    }
    switch (letter)
    {
    case 'A':
        number = 4;
        break;

    case 'B':
        number = 3;
        break;

    case 'C':
        number = 2;
        break;

    case 'D':
        number = 1;
        break;

    case 'E':
        number = 0;
        break;

    default:
        printf("huruf yang anda masukkan salah\n");
        return 1;
        break;
    }
    printf("Nilai angka %d\n", number);
    return 0;
}
