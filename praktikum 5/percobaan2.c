#include <stdio.h>

float avg(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float avg = sum / n;
    return avg;
}

int main()
{
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Masukkan data ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    float average = avg(arr, n);
    printf("Rata-rata data adalah %.2f\n", average);
    return 0;
}
