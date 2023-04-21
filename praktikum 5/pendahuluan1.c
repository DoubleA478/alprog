#include <stdio.h>
#define PI 3.14159265359

void circle()
{
    int radius;
    float area, ci;
    printf("Masukkan radius lingkaran:");
    scanf("%i", &radius);
    area = PI * radius * radius;
    ci = 2 * PI * radius;
    printf("Luas: %f\n", area);
    printf("Keliling: %f\n", ci);
}

int main(int argc, char const *argv[])
{
    circle();
    return 0;
}
