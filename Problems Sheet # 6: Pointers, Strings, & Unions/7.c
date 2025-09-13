#include <stdio.h>

int strLength(char *s) {
    if (*s == '\0') 
      return 0;
    return 1 + strLength(s + 1);
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    printf("Length = %d\n", strLength(str));
    return 0;
}
