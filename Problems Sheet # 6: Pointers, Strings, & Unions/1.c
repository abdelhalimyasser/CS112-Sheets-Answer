#include <stdio.h>

int main() 
{
    int x = 25;
    int *p = &x;

    printf("Value using pointer: %d\n", *p);
    return 0;
}
