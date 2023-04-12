#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int random, guess;
    srand(time(NULL));
    random = rand() % 100 + 1;
    while (guess != random)
    {
        printf("Angka tebakan:");
        scanf("%i", &guess);
        if (guess < random)
        {
            printf("Tebakan terlalu kecil\n");
        }
        else if (guess > random)
        {
            printf("Tebakan terlalu besar\n");
        }
        else
        {
            printf("Tebakan benar\n");
        }
    }

    return 0;
}