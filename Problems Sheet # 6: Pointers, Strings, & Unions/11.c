#include <stdio.h>
#include <string.h>
#include <time.h>

struct HealthProfile {
    char firstName[50];
    char lastName[50];
    char gender[10];
    int birthDay, birthMonth, birthYear;
    float height, weight;
};

int calcAge(int birthYear, int birthMonth, int birthDay) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int age = tm.tm_year + 1900 - birthYear;
    if (birthMonth > tm.tm_mon + 1 || 
       (birthMonth == tm.tm_mon + 1 && birthDay > tm.tm_mday)) {
        age--;
    }
    return age;
}

float calcBMI(float weight, float height) {
    return weight / (height * height);
}

int main() {
    struct HealthProfile p;

    printf("Enter first name: ");
    scanf("%s", p.firstName);
    printf("Enter last name: ");
    scanf("%s", p.lastName);
    printf("Enter gender: ");
    scanf("%s", p.gender);
    printf("Enter birth date (day month year): ");
    scanf("%d %d %d", &p.birthDay, &p.birthMonth, &p.birthYear);
    printf("Enter height (meters): ");
    scanf("%f", &p.height);
    printf("Enter weight (kg): ");
    scanf("%f", &p.weight);

    int age = calcAge(p.birthYear, p.birthMonth, p.birthDay);
    float bmi = calcBMI(p.weight, p.height);

    printf("\n--- Health Profile ---\n");
    printf("Name: %s %s\nGender: %s\nDOB: %02d/%02d/%04d\n", p.firstName, p.lastName, p.gender, p.birthDay, p.birthMonth, p.birthYear);
    printf("Height: %.2f m\nWeight: %.2f kg\n", p.height, p.weight);
    printf("Age: %d years\nBMI: %.2f\n", age, bmi);

    return 0;
}
