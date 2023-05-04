#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[256];
    printf("Masukkan String:");
    fgets(name, 256, stdin);
    int size = strlen(name);
    printf("%i", size);
    return 0;
}
