#include <stdio.h>
#include <string.h>

// Custom strrev function
char* strrev(char *str) {
    int i, j;
    char temp;
    int len = strlen(str);// used to reverce a string

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}

int main() {
    char str[100] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", strrev(str));
    
    return 0;
}