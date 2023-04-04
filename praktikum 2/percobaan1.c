#include <stdio.h>

int main()
{
    int suhu;
    printf("Masukkan suhu dalam celcius:");
    scanf("%i", &suhu);
    if (suhu > 30)
    {
        printf("Suhu sangat panas\n");
    }
    else if (suhu < 0)
    {
        printf("Suhu sangat dingin\n");
    }
    else
    {
        printf("Suhu sangat sejuk\n");
    }
    return 0;
}
