#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "first bit";// is used to copy a block of memeory from one location to another
    char dest[50];

    memcpy(dest, src, strlen(src) + 1); // +1 for null terminator

    printf("Copied string: %s\n", dest);
    return 0;
}