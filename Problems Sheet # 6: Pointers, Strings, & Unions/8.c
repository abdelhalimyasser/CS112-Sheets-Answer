#include <stdio.h>

int countSpaces(char *s) {
    if (*s == '\0') 
      return 0;
    return (*s == ' ' ? 1 : 0) + countSpaces(s + 1);
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    printf("Spaces = %d\n", countSpaces(str));
    return 0;
}
