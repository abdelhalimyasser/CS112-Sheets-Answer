#include <stdio.h>

int main() 
{
    int arr[10];
    int *p = arr;
    int i;
    int increasing = 0, decreasing = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", (p + i));
    

    for (i = 0; i < 9; i++) {
        if (*(p + i) < *(p + i + 1))
            increasing = 1;
        else if (*(p + i) > *(p + i + 1))
            decreasing = 1;
    }

    if (increasing && !decreasing) 
        printf("The numbers in the array are increasing\n");
    else if (!increasing && decreasing) 
        printf("The numbers in the array are decreasing\n");
    else if (!increasing && !decreasing) 
        printf("The numbers in the array are not changing\n");
    else
        printf("The numbers in the array are increasing and then decreasing\n");

    return 0;
}
