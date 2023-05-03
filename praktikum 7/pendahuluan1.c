#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[3];
    printf("Masukkan nilai matematika:");
    scanf("%i", &arr[0]);
    printf("Masukkan nilai Fisika:");
    scanf("%i", &arr[1]);
    printf("Masukkan nilai Kimia:");
    scanf("%i", &arr[2]);
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += arr[i];
    }
    float avg = sum / 3;
    printf("Nilai rata-ratanya adalah %.0f\n", avg);
    return 0;
}
