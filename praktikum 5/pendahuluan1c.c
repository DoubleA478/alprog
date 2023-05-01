#include <stdio.h>
#define PI 3.14159265359

float area(int *radius)
{
    float area;
    area = PI * *radius * *radius;
    printf("Luas: %f\n", area);
}

float circum(int *radius)
{
    float circum;
    circum = 2 * PI * *radius;
    printf("Keliling: %f\n", circum);
}

int main(int argc, char const *argv[])
{
    int radius;
    printf("Masukkan radius lingkaran:");
    scanf("%i", &radius);
    area(&radius);
    circum(&radius);
    return 0;
}
