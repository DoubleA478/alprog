#include <stdio.h>

int main(int argc, char const *argv[])
{
    int twoD[3][3] =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            twoD[i][j] = twoD[i][j] + 2;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3i ", twoD[i][j]);
        }
        printf("\n");
    }

    return 0;
}
