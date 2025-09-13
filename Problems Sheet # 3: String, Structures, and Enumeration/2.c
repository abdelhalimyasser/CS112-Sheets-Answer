#include <stdio.h>

int main() 
{
    char arr[11];  
    int i, found = 0;

    printf("Enter 10 characters: ");
    for(i=0; i<10; i++) 
      scanf(" %c", &arr[i]);
    arr[10] = '\0';

    for(i=0; i<10; i++) {
        if(arr[i] == 'z') {
            printf("'z' found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found) 
      printf("'z' not found\n");
  
    return 0;
}
