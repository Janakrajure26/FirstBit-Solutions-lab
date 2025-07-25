#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "hello";
    char b[] = "helo";// compares two blocks of memory byte by byte.

 //is used to check if memory areas (like arrays or strings) are the same or different.

    if (memcmp(a, b, strlen(a)) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are different.\n");
    }

    return 0;
}