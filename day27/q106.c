// Write a program to Create employee management system.

#include <stdio.h>
#include <string.h>

#define MAX 100

int empID[MAX];
char name[MAX][50];
char department[MAX][50];
float salary[MAX];

int totalEmployees = 0;

void addEmployee() {
    if (totalEmployees >= MAX) {
        printf("Employee limit reached!\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &empID[totalEmployees]);
    printf("Enter Name: ");
    scanf("%s", name[totalEmployees]);
    printf("Enter Department: ");
    scanf("%s", department[totalEmployees]);
    printf("Enter Salary: ");
    scanf("%f", &salary[totalEmployees]);

    totalEmployees++;
    printf("Employee Added Successfully!\n");
}

void displayEmployees() {
    if (totalEmployees == 0) {
        printf("No employees found!\n");
        return;
    }

    printf("\n--- Employee List ---\n");
    for (int i = 0; i < totalEmployees; i++) {
        printf("\nID: %d", empID[i]);
        printf("\nName: %s", name[i]);
        printf("\nDepartment: %s", department[i]);
        printf("\nSalary: %.2f\n", salary[i]);
    }
}

void searchEmployee() {
    int id;
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < totalEmployees; i++) {
        if (empID[i] == id) {
            printf("\nEmployee Found!\n");
            printf("Name: %s\n", name[i]);
            printf("Department: %s\n", department[i]);
            printf("Salary: %.2f\n", salary[i]);
            return;
        }
    }

    printf("Employee not found!\n");
}

void deleteEmployee() {
    int id;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < totalEmployees; i++) {
        if (empID[i] == id) {
            for (int j = i; j < totalEmployees - 1; j++) {
                empID[j] = empID[j + 1];
                strcpy(name[j], name[j + 1]);
                strcpy(department[j], department[j + 1]);
                salary[j] = salary[j + 1];
            }
            totalEmployees--;
            printf("Employee Deleted Successfully!\n");
            return;
        }
    }

    printf("Employee not found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: deleteEmployee(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}