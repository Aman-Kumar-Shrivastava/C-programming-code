#include<stdio.h>
#include<ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        printf("%c is an alphabet character.\n", ch);
    }
    if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    }
    if (isprint(ch)) {
        printf("%c is a printable character.\n", ch);
    }
    if (isspace(ch)) {
        printf("%c is a whitespace character.\n", ch);
    }

    return 0;
}