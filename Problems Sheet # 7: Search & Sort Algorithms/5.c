#include <stdio.h>

int replace(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (*str == ' ') {
            *str = '-';
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int spaces = replace(str);

    printf("Modified string: %s", str);
    printf("Spaces replaced: %d\n", spaces);

    return 0;
}
