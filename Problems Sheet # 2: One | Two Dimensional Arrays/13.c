#include <stdio.h>
#define PI 3.14159

void circle(double r, double *area, double *circ) {
    *area = PI*r*r;
    *circ = 2*PI*r;
}

int main() {
    double r, area, circ;
    printf("Enter radius: ");
    scanf("%lf",&r);
    circle(r,&area,&circ);
    printf("Area=%.2f Circumference=%.2f\n", area, circ);
    return 0;
}
