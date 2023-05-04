#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[256];
    printf("Masukkan String:");
    scanf("%s", name);
    int size = strlen(name);
    printf("%i", size);
    return 0;
}
