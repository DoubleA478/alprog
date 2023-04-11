#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            printf("%3i", (row + 1) * (col + 1));
        }
        printf("\n");
    }

    return 0;
}
