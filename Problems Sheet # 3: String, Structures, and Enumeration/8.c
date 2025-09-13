#include <stdio.h>
#define N 5

// Structs
// Date struct
struct Date {
    int day, month, year;
};

// Employee data struct
struct Employee {
    int id_no;
    float salary;
    struct Date birth_date;
    int tasks_ids[5];
};


// Functions prototypes
void inputEmployee(struct Employee *e);
float searchSalary(struct Employee emp[], int n, int id);


// Main to test
int main() {
    struct Employee employees[N];
    int i, id;
    float result;

    for(i=0;i<N;i++) {
        printf("\nEnter data for Employee %d:\n", i+1);
        inputEmployee(&employees[i]);
    }

    printf("\nEnter ID to search: ");
    scanf("%d", &id);

    result = searchSalary(employees, N, id);
    if(result == -1) printf("NOT FOUND\n");
    else printf("Salary = %.2f\n", result);

    return 0;
}


// Function to input employee
void inputEmployee(struct Employee *e) {
    int i;
    printf("Enter ID, Salary, Birth (day month year): ");
    scanf("%d %f %d %d %d", &e->id_no, &e->salary, &e->birth_date.day, &e->birth_date.month, &e->birth_date.year);
    printf("Enter 5 task IDs: ");
    for(i=0;i<5;i++) scanf("%d", &e->tasks_ids[i]);
}

// Function to get the salary
float searchSalary(struct Employee emp[], int n, int id) {
    for(int i=0; i<n; i++) {
        if(emp[i].id_no == id) return emp[i].salary;
    }
    return -1;
}
