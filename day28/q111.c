// Write a program to Create ticket booking system.

#include <stdio.h>

struct Ticket
{
    int id;
    char name[50];
    int seats;
};

struct Ticket t[100];
int total = 0;

void book()
{
    printf("Enter Ticket ID: ");
    scanf("%d", &t[total].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", t[total].name);

    printf("Enter Number of Seats: ");
    scanf("%d", &t[total].seats);

    total++;
    printf("Ticket Booked\n");
}

void show()
{
    int i;
    if (total == 0)
    {
        printf("No bookings\n");
    }
    else
    {
        for (i = 0; i < total; i++)
        {
            printf("\nID: %d", t[i].id);
            printf("\nName: %s", t[i].name);
            printf("\nSeats: %d\n", t[i].seats);
        }
    }
}

void search()
{
    int id, i, flag = 0;
    printf("Enter Ticket ID: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (t[i].id == id)
        {
            printf("Booking Found\n");
            printf("Name: %s\n", t[i].name);
            printf("Seats: %d\n", t[i].seats);
            flag = 1;
        }
    }

    if (flag == 0)
    {
        printf("Booking not found\n");
    }
}

void cancel()
{
    int id, i;
    printf("Enter Ticket ID to cancel: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (t[i].id == id)
        {
            printf("Ticket Cancelled\n");

            for (int j = i; j < total - 1; j++)
            {
                t[j] = t[j + 1];
            }
            total--;
            return;
        }
    }

    printf("Invalid ID\n");
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n1 Book Ticket\n2 Show Bookings\n3 Search\n4 Cancel Ticket\n5 Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch == 1)
            book();
        else if (ch == 2)
            show();
        else if (ch == 3)
            search();
        else if (ch == 4)
            cancel();
        else if (ch == 5)
            break;
        else
            printf("Invalid choice\n");
    }

    return 0;
}