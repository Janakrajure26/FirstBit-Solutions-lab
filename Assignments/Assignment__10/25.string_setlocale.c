#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    // Set the locale (may affect sorting)
    setlocale(LC_COLLATE, "");

    char str1[] = "apple";
    char str2[] = "Banana";

    int result = strcoll(str1, str2);

    if (result < 0) {
        printf("\"%s\" comes before \"%s\"\n", str1, str2);
    } else if (result > 0) {
        printf("\"%s\" comes after \"%s\"\n", str1, str2);
    } else {
        printf("Strings are equal\n");
    }

    return 0;
}