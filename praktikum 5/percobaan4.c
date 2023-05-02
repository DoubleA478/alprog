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
    printf("Masukkan 3 buah bilangan\n");
    scanf("%i %i %i", &a, &b, &c);
    int large = largest(&a, &b, &c);
    printf("Nilai terbesar adalah %i", large);
    return 0;
}
