#include <stdio.h>

int main()
{
    int temp;
    printf("Masukkan suhu dalam celcius:");
    scanf("%i", &temp);
    if (temp > 30)
    {
        printf("Suhu sangat panas\n");
    }
    else if (temp < 0)
    {
        printf("Suhu sangat dingin\n");
    }
    else
    {
        printf("Suhu sangat sejuk\n");
    }
    return 0;
}
