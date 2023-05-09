#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Jumlah mahasiswa:");
    scanf("%i", &n);
    char names[n][256];
    int grades[n][256];

    // input loop
    for (int i = 0; i < n; i++)
    {
        printf("Nama Mahasiswa-%i:", i + 1);
        // don't ask how this works, this dude on the coding den discord told me to use this
        // https://discord.com/channels/172018499005317120/172054194566594560/1105327647443140658
        // probably 255 is the lenght and the rest is regex shit
        scanf(" %255[^\n]", names[i]);
        int gcount;
        printf("Jumlah nilai:");
        scanf("%i", &gcount);
        grades[i][0] = gcount;
        for (int j = 1; j <= gcount; j++)
        {
            printf("Nilai-%i:", j);
            scanf("%i", &grades[i][j]);
        }
    }

    // output loop
    for (int i = 0; i < n; i++)
    {
        int gcount = grades[i][0];
        int sum = 0;
        for (int j = 1; j <= gcount; j++)
        {
            sum += grades[i][j];
        }
        int avg = sum / gcount;
        printf("Nilai rata-rata %s adalah %i\n", names[i], avg);
    }

    return 0;
}
