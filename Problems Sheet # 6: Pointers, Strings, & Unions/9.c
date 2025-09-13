#include <stdio.h>
#include <ctype.h>    // for gets function

int isDigits(char *s) {
    if (*s == '\0') return 1;
    if (!isdigit(*s)) return 0;
    return isDigits(s + 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    if (isDigits(str))
        printf("String contains only digits\n");
    else
        printf("String contains non-digit characters\n");
  
    return 0;
}
