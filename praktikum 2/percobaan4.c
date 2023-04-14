#include <stdio.h>

int main()
{
    int usage, cost, over, costover;
    printf("Masukkan pemakaian rekening listrik:");
    scanf("%i", &usage);
    if (usage <= 100)
    {
        cost = 100000;
    }
    else if (usage <= 500)
    {
        over = usage - 100;
        costover = over * 1500;
        cost = 100000 + costover;
    }
    else
    {
        over = usage - 500;
        costover = over * 2000;
        cost = 700000 + costover;
    }

    printf("%i\n", cost);
    return 0;
}
