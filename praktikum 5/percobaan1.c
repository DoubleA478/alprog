#include <stdio.h>

int sum_even(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    return sum;
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
    int even_sum = sum_even(arr, n);
    printf("Jumlah data genap adalah %d\n", even_sum);
    return 0;
}
