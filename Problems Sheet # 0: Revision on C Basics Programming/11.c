#include <stdio.h>

int main() 
{
    int a, b, choice;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Result = %d\n", a + b); break;
        case 2: printf("Result = %d\n", a - b); break;
        case 3: printf("Result = %d\n", a * b); break;
        case 4:
            if (b != 0) printf("Result = %.2f\n", (float)a / b);
            else printf("Division by zero not allowed.\n");
            break;
        default: printf("Invalid choice.\n");
    }
  
    return 0;
}
