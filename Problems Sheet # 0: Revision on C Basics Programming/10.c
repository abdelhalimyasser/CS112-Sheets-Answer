#include <stdio.h>

int main() 
{
    int a, b, c;
    printf("Enter 3 angles: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        printf("Equilateral Triangle\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles Triangle\n");
    else
        printf("Acute Triangle\n");

    return 0;
}
