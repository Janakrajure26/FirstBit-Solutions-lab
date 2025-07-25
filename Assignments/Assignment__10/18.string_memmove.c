#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "123456789";// is used to safely copy a block of memory,
	//even when source and destination memory areas overlap.

    // Move substring "456" to the beginning
    memmove(str, str + 4, 2);

    str[3] = '\0'; // Add null terminator

    printf("Result after memmove: %s\n", str);
    return 0;
}