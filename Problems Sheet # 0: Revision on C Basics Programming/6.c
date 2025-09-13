#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Greatest = %d\n", a);
    else if (b >= a && b >= c)
        printf("Greatest = %d\n", b);
    else
        printf("Greatest = %d\n", c);

    return 0;
}
