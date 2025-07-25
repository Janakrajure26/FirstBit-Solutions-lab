#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "my c programming";// searches for the first occurrence of a specific 
	//character (byte) in a block of memory.
    char *ptr;

    ptr = memchr(str, 'i', strlen(str)); // Search for 'w'

    if (ptr != NULL) {
        printf("Character found at position: %ld\n", ptr - str);
    } else {
        printf("Character not found.\n");
    }

    return 0;
}