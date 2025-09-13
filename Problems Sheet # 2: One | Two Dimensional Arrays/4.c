#include <stdio.h>

int main() 
{
    int arr[10], i, inc = 1, dec = 1;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) scanf("%d", &arr[i]);

    for(i = 1; i < 10; i++) {
        if(arr[i] > arr[i-1]) dec = 0;
        if(arr[i] < arr[i-1]) inc = 0;
    }

    if(inc && !dec) 
      printf("increasing\n");
    else if(dec && !inc) 
      printf("decreasing\n");
    else if(!inc && !dec) 
      printf("not changing\n");
    else 
      printf("increasing and then decreasing\n");

    return 0;
}
