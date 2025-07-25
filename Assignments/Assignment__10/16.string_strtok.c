#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "C programming easy and powerful";
    char *token;

    token = strtok(str, " ");  // split by space

    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}