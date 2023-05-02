#include <stdio.h>

int largest(int *a, int *b, int *c)
{
    int largest;
    if (*a >= *b)
    {
        if (*a >= *c)
        {
            largest = *a;
        }
        else
        {
            largest = *c;
        }
    }
    else
    {

        if (*b >= *c)
        {
            largest = *b;
        }
        else
        {
            largest = *c;
        }
    }
}

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("masukkan 3 angka (dipisahkan oleh spasi): ");
    scanf("%i %i %i", &a, &b, &c);
    printf("nilai terbesar adalah: %i", largest(&a, &b, &c));
    return 0;
}
