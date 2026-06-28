// Write a program to Create contact management system.

#include <stdio.h>
#include <string.h>

struct Contact
{
    int id;
    char name[50];
    char phone[15];
};

struct Contact c[100];
int total = 0;

void add()
{
    printf("Enter ID: ");
    scanf("%d", &c[total].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", c[total].name);

    printf("Enter Phone: ");
    scanf("%s", c[total].phone);

    total++;
    printf("Contact Saved\n");
}

void show()
{
    int i;
    if (total == 0)
    {
        printf("No contacts\n");
    }
    else
    {
        for (i = 0; i < total; i++)
        {
            printf("\nID: %d", c[i].id);
            printf("\nName: %s", c[i].name);
            printf("\nPhone: %s\n", c[i].phone);
        }
    }
}

void search()
{
    int id, i, found = 0;
    printf("Enter ID: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (c[i].id == id)
        {
            printf("Found\n");
            printf("Name: %s\n", c[i].name);
            printf("Phone: %s\n", c[i].phone);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Not found\n");
    }
}

void update()
{
    int id, i;
    printf("Enter ID to update: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (c[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", c[i].name);

            printf("Enter New Phone: ");
            scanf("%s", c[i].phone);

            printf("Updated\n");
            return;
        }
    }

    printf("Contact not found\n");
}

void deleteContact()
{
    int id, i, j;
    printf("Enter ID to delete: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (c[i].id == id)
        {
            for (j = i; j < total - 1; j++)
            {
                c[j] = c[j + 1];
            }
            total--;
            printf("Deleted\n");
            return;
        }
    }

    printf("Contact not found\n");
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n1 Add\n2 Show\n3 Search\n4 Update\n5 Delete\n6 Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch == 1)
            add();
        else if (ch == 2)
            show();
        else if (ch == 3)
            search();
        else if (ch == 4)
            update();
        else if (ch == 5)
            deleteContact();
        else if (ch == 6)
            break;
        else
            printf("Invalid\n");
    }

    return 0;
}