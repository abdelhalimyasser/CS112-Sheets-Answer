#include <stdio.h>

int main() 
{
    int arr[10], i, max, min, sum = 0;
    float avg;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];
    for(i = 0; i < 10; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
        sum += arr[i];
    }

    avg = sum / 10.0;

    printf("Max = %d, Min = %d, Average = %.2f\n", max, min, avg);
    return 0;
}
