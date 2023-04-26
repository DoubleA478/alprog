#include <stdio.h>

int main()
{
    while (1)
    {
        int B;

        printf("Masukkan nilai B: ");
        scanf("%d", &B);

        // Seleksi nilai B
        if (B == 0)
        {
            goto Tak_berhingga; // Melompat ke label Tak_berhingga jika B == 0
        }
    }

Tak_berhingga: // Label Tak_berhingga
    printf("B adalah 0. Proses program berhenti.\n");

    return 0;
}
