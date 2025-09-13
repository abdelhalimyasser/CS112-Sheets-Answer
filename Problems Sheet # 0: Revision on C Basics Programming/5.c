#include <stdio.h>

int main() 
{
    float base, height;
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    printf("Area = %.2f\n", 0.5 * base * height);
    return 0;
}
