// Write a program to Create library management system.

#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    int qty;
};

struct Book b[100];
int total = 0;

void add()
{
    printf("Enter id: ");
    scanf("%d", &b[total].id);

    printf("Enter name: ");
    scanf(" %[^\n]", b[total].name);

    printf("Enter author: ");
    scanf(" %[^\n]", b[total].author);

    printf("Enter quantity: ");
    scanf("%d", &b[total].qty);

    total++;
    printf("Book added\n");
}

void show()
{
    int i;
    if (total == 0)
    {
        printf("No books\n");
    }
    else
    {
        for (i = 0; i < total; i++)
        {
            printf("\nId: %d", b[i].id);
            printf("\nName: %s", b[i].name);
            printf("\nAuthor: %s", b[i].author);
            printf("\nQty: %d\n", b[i].qty);
        }
    }
}

void search()
{
    int id, i, flag = 0;
    printf("Enter id: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (b[i].id == id)
        {
            printf("Found\n");
            printf("%s by %s\n", b[i].name, b[i].author);
            flag = 1;
        }
    }

    if (flag == 0)
    {
        printf("Not found\n");
    }
}

void issue()
{
    int id, i;
    printf("Enter id: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (b[i].id == id)
        {
            if (b[i].qty > 0)
            {
                b[i].qty--;
                printf("Issued\n");
            }
            else
            {
                printf("No stock\n");
            }
            return;
        }
    }

    printf("Wrong id\n");
}

void giveback()
{
    int id, i;
    printf("Enter id: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (b[i].id == id)
        {
            b[i].qty++;
            printf("Returned\n");
            return;
        }
    }

    printf("Wrong id\n");
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n1 Add\n2 Show\n3 Search\n4 Issue\n5 Return\n6 Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch == 1)
            add();
        else if (ch == 2)
            show();
        else if (ch == 3)
            search();
        else if (ch == 4)
            issue();
        else if (ch == 5)
            giveback();
        else if (ch == 6)
            break;
        else
            printf("Invalid\n");
    }

    return 0;
}
