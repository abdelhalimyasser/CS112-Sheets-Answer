#include <stdio.h>

int main() {
    int arr[10];
    int *p = arr;
    int i, sumEven = 0, sumOdd = 0;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", (p + i));
    }

    for (i = 0; i < 10; i++) {
        if (*(p + i) % 2 == 0)
            sumEven += *(p + i);
        else
            sumOdd += *(p + i);
    }

    printf("Sum of Even numbers = %d\n", sumEven);
    printf("Sum of Odd numbers  = %d\n", sumOdd);

    return 0;
}
