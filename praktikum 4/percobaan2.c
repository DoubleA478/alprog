#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            printf("%3i", row * col);
        }
        printf("\n");
    }

    return 0;
}
