#include <stdio.h>

int bubbleSort(int arr[], int size)
{
    for (int step = 0; step < size - 1; ++step)
    {
        for (int i = 0; i < size - step - 1; ++i)
        {
            if (arr[i] < arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("masukkan data ke-%i:", i + 1);
        scanf("%i", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%4i", arr[i]);
    }
    printf("\n");
    return 0;
}
