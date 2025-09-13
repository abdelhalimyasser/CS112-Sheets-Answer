#include <stdio.h>

int main() 
{
    int arr[5], *p = arr, sum = 0, *sump = &sum;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", (p + i));
        *sump += *(p + i);
    }

    printf("Sum = %d\n", *sump);
    return 0;
}
