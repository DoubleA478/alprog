#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("masukkan nilai:");
    scanf("%i", &num);
    for (int row = 0; row < num * 2 - 1; row++)
    {
        for (int col = 0; col < num; col++)
        {
            if (row < num)
            {
                if (col < num - row - 1)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                if (col > row - num)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
