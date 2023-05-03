#include <stdio.h>

int freq(char *arr, char toFind)
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; ++i)
    {
        if (toFind == arr[i])
            ++count;
    }

    return count;
}

int arrayHas(char *arr, char has)
{
    int arrlen = sizeof arr / sizeof arr[0];
    for (int i = 0; i < arrlen; i++)
    {
        if (arr[i] == has)
        {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Masukkan jumlah karakter yang akan dihitung: ");
    scanf("%i", &n);

    char arr[n];
    int count = 0;
    while (count < n)
    {
        char temp;
        printf("Masukkan karakter ke-%d: ", count + 1);
        scanf(" %c", &temp);
        if (temp >= 'a' && temp <= 'z')
        {
            arr[count] = temp;
            count++;
        }
    }

    printf("\n");

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (arrayHas(arr, i))
        {
            int frequency = freq(arr, i);
            printf("Frekuensi %c=%i\n", i, frequency);
        }
    }

    return 0;
}
