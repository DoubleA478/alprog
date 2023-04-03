#include <stdio.h>

int main()
{
    int a, b, c;
    printf("masukkan bilangan a\n");
    scanf("%i", &a);
    printf("masukkan bilangan b\n");
    scanf("%i", &b);
    c = a;
    a = b;
    b = c;
    printf("jadi bilangan a sekarang %i\n", a);
    printf("jadi bilangan b sekarang %i\n", b);
}