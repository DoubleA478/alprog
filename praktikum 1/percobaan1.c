#include <stdio.h>

int main()
{
    char name[255];
    int age, telephone;
    printf("Masukkan data diri anda\n");
    printf("Nama: ");
    scanf("%s", name);
    printf("Umur: ");
    scanf("%i", &age);
    printf("No Telfon: ");
    scanf("%i", &telephone);
    printf("Hello %s, Umur %i, no telp %i\nBagaimana kabar anda hari ini?\n", name, age, telephone);
    return 0;
}