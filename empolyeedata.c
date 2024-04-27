#include <stdio.h>

// Define the structure "Employee"
struct Employee {
    int employeeID;
    char name[50];
    float salary;
};

int main() {
    // Declare an array of structures "Employee"
    struct Employee employees[100];

    // Input the number of employees
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input details for all employees
    for(int i = 0; i < n; i++) {
        printf("\nInput details for Employee %d:\n", i+1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        printf("Name: ");
        scanf("%s", employees[i].name); // Assuming names do not contain spaces
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Print details for all employees
    printf("\nEmployee Details:\n");
    for(int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i+1);
        printf("Employee ID: %d\n", employees[i].employeeID);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
