// Write a program to Create student record system using arrays and strings.

#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX], marks[MAX], n = 0;
char name[MAX][50];

void add()
{
    if (n >= MAX)
    {
        printf("Database Full!\n");
        return;
    }

    printf("Enter Roll No: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf(" %[^\n]", name[n]);

    printf("Enter Marks: ");
    scanf("%d", &marks[n]);

    n++;
    printf("Record Added!\n");
}

void display()
{
    if (n == 0)
    {
        printf("No records\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
}

void search()
{
    int r, found = 0;
    printf("Enter Roll No to search: ");
    scanf("%d", &r);

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            printf("Found: %d %s %d\n", roll[i], name[i], marks[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Record not found\n");
}

void update()
{
    int r, found = 0;
    printf("Enter Roll No to update: ");
    scanf("%d", &r);

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            printf("Enter New Marks: ");
            scanf("%d", &marks[i]);
            printf("Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Record not found\n");
}

void deleteRecord()
{
    int r, found = 0;
    printf("Enter Roll No to delete: ");
    scanf("%d", &r);

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            for (int j = i; j < n - 1; j++)
            {
                roll[j] = roll[j + 1];
                marks[j] = marks[j + 1];
                strcpy(name[j], name[j + 1]);
            }
            n--;
            printf("Record Deleted!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Record not found\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n--- STUDENT MENU ---\n");
        printf("1.Add\n2.Display\n3.Search\n4.Update\n5.Delete\n6.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            deleteRecord();
            break;
        case 6:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
        }

    } while (choice != 6);

    return 0;
}
