#include <stdio.h>

int main(int argc, char const *argv[])
{
    int grade;
    printf("Masukkan nilai ujian:");
    scanf("%i", &grade);
    if (grade >= 70)
    {
        printf("Anda lulus\n");
    }
    else
    {
        printf("Anda tidak lulus\n");
    }
    return 0;
}
