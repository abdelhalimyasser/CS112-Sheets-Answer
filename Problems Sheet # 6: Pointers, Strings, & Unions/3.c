#include <stdio.h>

void calcFuel(int miles, float fuel, float *consumption) {
    *consumption = fuel / miles;
}

int main() 
{
    int miles;
    float fuel, consumption;

    printf("Enter driven miles: ");
    scanf("%d", &miles);

    printf("Enter fuel consumption (liters): ");
    scanf("%f", &fuel);

    calcFuel(miles, fuel, &consumption);

    printf("Fuel consumption per mile: %.2f\n", consumption);
    return 0;
}
