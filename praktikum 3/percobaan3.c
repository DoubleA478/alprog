#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int random, guess;
    srand(time(NULL));     // generate random number seed from current time
    random = rand() % 101; // generate a random number between 0-100
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
    }

    printf("Tebakan benar\n");
    return 0;
}