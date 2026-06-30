// Write a program to Create mini employee management system.

#include <stdio.h>

int main()
{
    int id[100], salary[100], n = 0, i, choice, searchId;
    char name[100][50];

    while (1)
    {
        printf("\n--- EMPLOYEE MENU ---\n");
        printf("1.Add  2.Display  3.Search  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4)
        {
            break;
        }
        if (choice == 1)
        {
            printf("Enter ID: ");
            scanf("%d", &id[n]);

            printf("Enter Name: ");
            scanf(" %[^\n]", name[n]);

            printf("Enter Salary: ");
            scanf("%d", &salary[n]);

            n++;
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                printf("No records\n");
            }
            else
            {
                printf("\nID\tName\tSalary\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%d\n", id[i], name[i], salary[i]);
                }
            }
        }
        else if (choice == 3)
        {
            printf("Enter ID to search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++)
            {
                if (id[i] == searchId)
                {
                    printf("Found: %d %s %d\n", id[i], name[i], salary[i]);
                    break;
                }
            }

            if (i == n)
            {
                printf("Employee not found\n");
            }
        }

        else
        {
            printf("Wrong choice\n");
        }
    }
    return 0;
}