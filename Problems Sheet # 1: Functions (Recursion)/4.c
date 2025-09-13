#include <stdio.h>

// Function prototype to declare it
int sumNatural(int n);

// Main function to test
int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers = %d\n", n, sumNatural(n));
    return 0;
}

// Recursive function to calculate sum of natural numbers
int sumNatural(int n) {
    if (n == 0)  
        return 0;
    return n + sumNatural(n - 1);
}
