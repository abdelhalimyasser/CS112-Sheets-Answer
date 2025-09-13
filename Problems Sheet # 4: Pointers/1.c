#include <stdio.h>

int main() {
    int arr[10], i;
    int *p = arr;
    int max, min, sum = 0;
    float avg;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", (p + i));
    }

    max = min = *p; // first element
    for (i = 0; i < 10; i++) {
        if (*(p + i) > max) max = *(p + i);
        if (*(p + i) < min) min = *(p + i);
        sum += *(p + i);
    }

    avg = sum / 10.0;

    printf("Max = %d, Min = %d, Average = %.2f\n", max, min, avg);
    return 0;
}
