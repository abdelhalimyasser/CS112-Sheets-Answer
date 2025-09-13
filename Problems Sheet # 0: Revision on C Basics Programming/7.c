#include <stdio.h>

int main() 
{
    float s1, s2, s3, avg;
    printf("Enter 3 scores: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    avg = (s1 + s2 + s3) / 3;

    if (avg >= 90) printf("Grade = A\n");
    else if (avg >= 70) printf("Grade = B\n");
    else if (avg >= 50) printf("Grade = C\n");
    else printf("Grade = F\n");

    return 0;
}
