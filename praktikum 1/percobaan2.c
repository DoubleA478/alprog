#include <stdio.h>

int main()
{
    int speed, time;
    printf("Masukkan kecepatan dan waktu mobil anda\n");
    printf("Kecepatan (m/detik):");
    scanf("%i", &speed);
    printf("Waktu (detik):");
    scanf("%i", &time);
    printf("Jadi jarak tempuh(m) anda adalah %i meter\n", speed * time);
}