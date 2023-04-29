#include <stdio.h>

int main()
{
    int m;
    printf("program untuk mentotal bilangan prima\n");
    printf("masukkan nilai m:\n");
    scanf("%d", &m);

    int count = 0, total = 0, number = 2;

    while (count < m)
    {
        int flag = 0;

        for (int i = 2; i <= number / 2; ++i)
        {
            if (number % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("bilangan prima yang ke %d = %d\n", count + 1, number);
            total += number;
            count++;
        }
        number++;
    }

    printf("\n");
    printf("total %i bil prima pertama = %i\n", m, total);

    return 0;
}
