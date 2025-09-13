#include <stdio.h>

int main() 
{
    int x, y, z;
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &x, &y, &z);
  
    printf("Reversed order: %d %d %d\n", z, y, x);
  
    return 0;
}
