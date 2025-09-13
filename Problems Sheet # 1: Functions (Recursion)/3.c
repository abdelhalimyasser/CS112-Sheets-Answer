#include <stdio.h>

int diff(int min, int max) {
    return max - min;
}

int main() 
{
    int arr[10], i, min, max;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    min = max = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Smallest = %d, Greatest = %d\n", min, max);
    printf("Difference = %d\n", diff(min, max));

    return 0;
}
