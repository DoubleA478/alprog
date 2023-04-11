#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, count = 1, total = 0;
    float aver;
    printf("banyaknya data?");
    scanf("%i", &num);
    printf("\n");
    while (count <= num)
    {
        int grade;
        printf("data ke%4i?", count);
        scanf("%i", &grade);
        if (grade < 0)
        {
            continue;
        }
        total += grade;
        count++;
    }
    printf("\n");
    aver = total / num;
    printf("banyaknya mahasiswa\t\t=%i\n", num);
    printf("total nilai mahasiswa\t\t=%i\n", total);
    printf("rata-rata nilai mahasiswa\t=%f", aver);

    return 0;
}