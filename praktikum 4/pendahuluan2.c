#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 7; col++)
        {
            if (row < 2 && col < 3)
            {
                printf("* ");
            }
            else
            {
                printf("- ");
            }
        }
        printf("\n");
    }

    return 0;
}
