#include <stdio.h>
#include <strings.h>  // for strcasecmp

int main() {
    char str1[] = "Hello";
    char str2[] = "hello";// comapre a two string with out case sensitivity

    if (strcasecmp(str1, str2) == 0) {
        printf("Strings are equal (case-insensitive).\n");
    } else {
        printf("Strings are different.\n");
    }

    return 0;
}