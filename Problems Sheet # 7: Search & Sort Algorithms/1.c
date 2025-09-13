#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++)
        if (arr[i] < arr[i - 1]) 
          return 0; 
    return 1; 
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size))
        printf("Array is sorted\n");
    else
        printf("Array is NOT sorted\n");
  
    return 0;
}
