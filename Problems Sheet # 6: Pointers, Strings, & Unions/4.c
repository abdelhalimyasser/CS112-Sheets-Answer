#include <stdio.h>

int main() 
{
    int arr[5], *p = arr;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) 
        scanf("%d", (p + i));

    printf("You entered: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(p + i));
  
    printf("\n");
    return 0;
}
