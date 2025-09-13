#include <stdio.h>

int difference(int max, int min) {
    return max - min;
}

int main() {
    int num, i;
    int min, max;

    printf("Enter 10 integers:\n");
    scanf("%d", &num);
    min = max = num;

    for (i = 2; i <= 10; i++) {
        scanf("%d", &num);

        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }

    printf("Smallest value = %d\n", min);
    printf("Greatest value = %d\n", max);
    printf("Difference = %d\n", difference(max, min));

    return 0;
}
