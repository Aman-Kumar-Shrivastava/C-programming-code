#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Helper functions for strlwr and strupr
void strlwr_custom(char *s) {
    for(int i = 0; s[i]; i++)
        s[i] = tolower(s[i]);
}
void strupr_custom(char *s) {
    for(int i = 0; s[i]; i++)
        s[i] = toupper(s[i]);
}
// Helper function for strrev 
void strrev_custom(char *s) {
    int len = strlen(s);
    for(int i = 0; i < len/2; i++) {
        char temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
}

int main() {
    char str1[100], str2[100], str3[100];

    // gets() and puts()
    printf("Enter a string (gets): ");
    gets(str1); 
    printf("You entered (puts): ");
    puts(str1);

    // strlen()
    printf("Length of the string: %lu\n", strlen(str1));

    // strcpy()
    strcpy(str2, str1);
    printf("Copied string (strcpy): %s\n", str2);

    // strcat()
    printf("Enter another string to concatenate: ");
    gets(str3);
    strcat(str2, str3);
    printf("Concatenated string (strcat): %s\n", str2);

    // strcmp()
    printf("Comparing '%s' and '%s': %d\n", str1, str3, strcmp(str1, str3));

    // strchr()
    char *ptr = strchr(str1, 'a');
    if(ptr)
        printf("First occurrence of 'a' in '%s': %s\n", str1, ptr);
    else
        printf("'a' not found in '%s'\n", str1);

    // strstr()
    ptr = strstr(str1, "is");
    if(ptr)
        printf("Substring \"is\" found in '%s': %s\n", str1, ptr);
    else
        printf("\"is\" not found in '%s'\n", str1);

    // strrev() custom
    strrev_custom(str1);
    printf("Reversed string (strrev): %s\n", str1);

    // strlwr() custom
    strlwr_custom(str2);
    printf("Lowercase string (strlwr): %s\n", str2);

    // strupr() custom
    strupr_custom(str2);
    printf("Uppercase string (strupr): %s\n", str2);

    return 0;
}