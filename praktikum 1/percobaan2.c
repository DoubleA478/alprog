#include <stdio.h>

int main()
{
    int speed, time, range;
    printf("Masukkan kecepatan dan waktu mobil anda\n");
    printf("Kecepatan (m/detik):");
    scanf("%i", &speed);
    printf("Waktu (detik):");
    scanf("%i", &time);
    range = speed * time;
    printf("Jadi jarak tempuh(m) anda adalah %i meter\n", range);
    return 0;
}