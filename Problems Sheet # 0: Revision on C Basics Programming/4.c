#include <stdio.h>

int main() 
{
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    int p = x * y;
    int s = x + y;
    int total = (s * s) + p * (s - x) * (p + y);

    printf("Total = %d\n", total);
    return 0;
}
