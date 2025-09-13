#include <stdio.h>

// Function prototype to declare it
int isPrime(int n, int i);

// Main function to test
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n, 2))
        printf("%d is a Prime number\n", n);
    else
        printf("%d is Not a Prime number\n", n);

    return 0;
}

// Recursive function to check prime
int isPrime(int n, int i) {
    if (n <= 2)
        return (n == 2);  // 2 is prime
    if (n % i == 0)
        return 0;         // divisible → not prime
    if (i * i > n)
        return 1;         // no divisors → prime
    return isPrime(n, i + 1);
}
