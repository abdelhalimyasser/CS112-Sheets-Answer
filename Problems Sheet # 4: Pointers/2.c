#include <stdio.h>

int main() {
    char arr[10];
    char *p = arr;
    int i, pos = -1;

    printf("Enter 10 characters:\n");
    for (i = 0; i < 10; i++) {
        scanf(" %c", (p + i));
    }

    for (i = 0; i < 10; i++) {
        if (*(p + i) == 'z') {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        printf("Character 'z' found at position: %d\n", pos);
    else
        printf("Character 'z' not found\n");

    return 0;
}
