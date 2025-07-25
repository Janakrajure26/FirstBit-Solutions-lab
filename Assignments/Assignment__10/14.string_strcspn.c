#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[] = "programming";
    char str2[] = "aeiou";  // vowels

    size_t index = strcspn(str1, str2);

    printf("First vowel found at index: %zu\n", index);
    return 0;
}