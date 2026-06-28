// Write a program to Create salary management system.

#include <stdio.h>
#include <string.h>

#define MAX 100

int empID[MAX];
char name[MAX][50];
float basic[MAX], hra[MAX], da[MAX], gross[MAX];

int total = 0;

void addEmployee() {
    if (total >= MAX) {
        printf("Limit reached!\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &empID[total]);
    printf("Enter Name: ");
    scanf("%s", name[total]);
    printf("Enter Basic Salary: ");
    scanf("%f", &basic[total]);

    hra[total] = basic[total] * 0.2;
    da[total] = basic[total] * 0.1;
    gross[total] = basic[total] + hra[total] + da[total];

    total++;
    printf("Employee Added!\n");
}

void display() {
    if (total == 0) {
        printf("No records!\n");
        return;
    }

    printf("\nID\tName\tBasic\tHRA\tDA\tGross\n");
    for (int i = 0; i < total; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
               empID[i], name[i], basic[i], hra[i], da[i], gross[i]);
    }
}

void search() {
    int id;
    printf("Enter ID: ");
    scanf("%d", &id);

    for (int i = 0; i < total; i++) {
        if (empID[i] == id) {
            printf("\nName: %s\n", name[i]);
            printf("Basic: %.2f\n", basic[i]);
            printf("HRA: %.2f\n", hra[i]);
            printf("DA: %.2f\n", da[i]);
            printf("Gross: %.2f\n", gross[i]);
            return;
        }
    }

    printf("Not found!\n");
}

int main() {
    int choice;

    do {
        printf("\n1. Add Employee\n2. Display\n3. Search\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: display(); break;
            case 3: search(); break;
            case 4: printf("Exit\n"); break;
            default: printf("Invalid\n");
        }
    } while (choice != 4);

    return 0;
}