// Write a program to Create mini library system.

#include <stdio.h>
#include <string.h>

#define MAX 50

struct Book
{
    int id;
    char name[50];
};

struct Book b[MAX];
int n = 0;

void add()
{
    if (n == MAX)
    {
        printf("Library Full\n");
        return;
    }

    printf("Enter ID: ");
    scanf("%d", &b[n].id);

    // Check duplicate ID
    for (int i = 0; i < n; i++)
    {
        if (b[i].id == b[n].id)
        {
            printf("ID already exists\n");
            return;
        }
    }

    printf("Enter Name: ");
    scanf(" %[^\n]", b[n].name);

    n++;
    printf("Book Added\n");
}

void display()
{
    if (n == 0)
    {
        printf("No Books\n");
        return;
    }

    printf("\nID\tName\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%s\n", b[i].id, b[i].name);

    printf("Total Books: %d\n", n);
}

void search()
{
    int x, found = 0;
    printf("Enter ID: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (b[i].id == x)
        {
            printf("Found: %s\n", b[i].name);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Not Found\n");
}

void del()
{
    int x;
    printf("Enter ID: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (b[i].id == x)
        {
            for (int j = i; j < n - 1; j++)
                b[j] = b[j + 1];

            n--;
            printf("Deleted\n");
            return;
        }
    }

    printf("Not Found\n");
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n1.Add 2.Display 3.Search 4.Delete 5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch == 1)
            add();
        else if (ch == 2)
            display();
        else if (ch == 3)
            search();
        else if (ch == 4)
            del();
        else if (ch == 5)
            break;
        else
            printf("Invalid Choice\n");
    }

    return 0;
}