#include <stdio.h>

int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("masukkan data a: ");
    scanf("%i", &a);
    printf("masukkan data b: ");
    scanf("%i", &b);
    swap(&a, &b);
    printf("a= %d, b = %d", a, b);
    return 0;
}
