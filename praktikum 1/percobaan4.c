#include <stdio.h>

int main()
{
    int lenght, width, height, volume;
    printf("Masukkan panjang, lebar dan tinggi\n");
    printf("Panjang(cm):");
    scanf("%i", &lenght);
    printf("Lebar(cm):");
    scanf("%i", &width);
    printf("Tinggi(cm):");
    scanf("%i", &height);
    volume = lenght * width * height;
    printf("jadi volumenya adalah %i cm kubik\n", volume);
}