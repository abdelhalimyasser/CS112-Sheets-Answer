#include <stdio.h>

struct Person {
    char name[50];
    int age;
    int isCitizen;
    union {
        char state[50];
        char country[50];
    } place;
};

int main() {
    struct Person p;

    printf("Enter your name: ");
    gets(p.name);
    printf("Enter your age: ");
    scanf("%d", &p.age);

    printf("Are you a U.S. citizen? (1=Yes, 0=No): ");
    scanf("%d", &p.isCitizen);
    getchar(); 

    if (p.isCitizen) {
        printf("Enter your state: ");
        gets(p.place.state);
    } 
    else {
        printf("Enter your country: ");
        gets(p.place.country);
    }

    printf("\n--- Info ---\n");
    printf("Name: %s\nAge: %d\n", p.name, p.age);
    if (p.isCitizen)
        printf("State: %s\n", p.place.state);
    else
        printf("Country: %s\n", p.place.country);

    return 0;
}
