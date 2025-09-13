#include <stdio.h>

int isAscending(int *p, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (*(p + i) > *(p + i + 1)) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int arr[5];
    int *p = arr;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", (p + i));
    }

    if (isAscending(p, 5))
        printf("Array is ascending\n");
    else
        printf("Array is NOT ascending\n");

    return 0;
}
