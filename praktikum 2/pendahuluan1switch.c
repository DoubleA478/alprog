#include <stdio.h>

int main(int argc, char const *argv[])
{
    int grade, check;
    printf("Masukkan nilai ujian:");
    scanf("%i", &grade);
    check = grade >= 70;
    switch (check)
    {
    case 1:
        printf("Anda lulus\n");
        break;

    default:
        printf("Anda tidak lulus\n");
        break;
    }
    return 0;
}
