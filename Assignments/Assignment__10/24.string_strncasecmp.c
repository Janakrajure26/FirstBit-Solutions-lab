#include <stdio.h>
#include <strings.h>  // for strncasecmp

int main() {
    char str1[] = "HelloWorld";
    char str2[] = "helloTest";// case insensitive

    int result = strncasecmp(str1, str2, 5);  // Compare only first 5 chars

    if (result == 0) {
        printf("First 5 characters match (case-insensitive).\n");
    } else {
        printf("First 5 characters are different.\n");
    }

    return 0;
}