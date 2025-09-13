#include <stdio.h>

int findGreatest(int *arr, int n) {
    int max = *arr;
    for (int i = 1; i < n; i++)
        if (*(arr + i) > max)
            max = *(arr + i);
    return max;
}

int main() 
{
    int arr[8];
    printf("Enter 8 numbers:\n");
    for (int i = 0; i < 8; i++) 
        scanf("%d", &arr[i]);

    int max = findGreatest(arr, 8);
    printf("Greatest number = %d\n", max);

    return 0;
}
