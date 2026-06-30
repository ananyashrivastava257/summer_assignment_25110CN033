// Write a program to Develop complete mini project using arrays, strings and functions.

#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    int id;
    char name[50];
    float attendance;
};

struct Student s[MAX];
int count = 0;

void addStudent()
{
    printf("Enter ID: ");
    scanf("%d", &s[count].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[count].name);

    printf("Enter Attendance Percentage: ");
    scanf("%f", &s[count].attendance);

    count++;
    printf("Record Added Successfully!\n");
}

void displayStudents()
{
    if (count == 0)
    {
        printf("No Records Found!\n");
        return;
    }

    printf("\n--- Student Attendance Records ---\n");
    for (int i = 0; i < count; i++)
    {
        printf("\nID: %d\nName: %s\nAttendance: %.2f%%\n",
               s[i].id, s[i].name, s[i].attendance);
    }
}

void searchStudent()
{
    int id, found = 0;
    printf("Enter ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (s[i].id == id)
        {
            printf("\nStudent Found!\n");
            printf("Name: %s\nAttendance: %.2f%%\n",
                   s[i].name, s[i].attendance);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student Not Found!\n");
}

void updateAttendance()
{
    int id, found = 0;
    printf("Enter ID to Update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (s[i].id == id)
        {
            printf("Enter New Attendance: ");
            scanf("%f", &s[i].attendance);
            printf("Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n--- Attendance Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Records\n");
        printf("3. Search Student\n");
        printf("4. Update Attendance\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            updateAttendance();
            break;
        }

    } while (choice != 5);

    return 0;
}