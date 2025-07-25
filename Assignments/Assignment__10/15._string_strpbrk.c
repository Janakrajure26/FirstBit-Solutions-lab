#include<stdio.h>
#include<string.h>
int main ()
{
	    char str1[] = "computer";
    char str2[] = "puoit";  // check if any of these letters are in str1

    char *result = strpbrk(str1, str2);

    if (result != NULL) {
        printf("First matching character: %c\n", *result);
    } else {
        printf("No characters from str2 found in str1.\n");
    }

    return 0;
}