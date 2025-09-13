#include <stdio.h>

float mean(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) 
      sum += arr[i];
    return (float)sum / size;
}

int mode(int arr[], int size) {
    int maxCount = 0, modeValue = arr[0];
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) 
              count++;
        }
        if (count > maxCount) {
            maxCount = count;
            modeValue = arr[i];
        }
    }
    return modeValue;
}

float median(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if (size % 2 == 0)
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    else
        return arr[size / 2];
}

int main() {
    int arr[] = {4, 1, 2, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int choice;

    printf("Menu:\n1. Mean\n2. Mode\n3. Median\nChoose option: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Mean = %.2f\n", mean(arr, size));
            break;
        case 2:
            printf("Mode = %d\n", mode(arr, size));
            break;
        case 3:
            printf("Median = %.2f\n", median(arr, size));
            break;
        default:
            printf("Invalid choice\n");
    }
  
    return 0;
}
