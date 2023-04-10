#include <stdio.h>

int main()
{
    int usage, cost;
    printf("Masukkan pemakaian rekening listrik:");
    scanf("%i", &usage);
    if (usage <= 100)
    {
        cost = 100000;
    }
    else if (usage > 100 && usage <= 500)
    {
        int over, costover;
        over = usage - 100;
        costover = over * 1500;
        cost = 100000 + costover;
    }
    else
    {
        int over, costover;
        over = usage - 500;
        costover = over * 2000;
        cost = 700000 + costover;
    }

    printf("%i\n", cost);
    return 0;
}
