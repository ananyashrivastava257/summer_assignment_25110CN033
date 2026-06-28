// Write a program to Create bank account system.

#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

struct Account a[100];
int total = 0;

void create()
{
    printf("Enter Account Number: ");
    scanf("%d", &a[total].accNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", a[total].name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a[total].balance);

    total++;
    printf("Account Created\n");
}

void display()
{
    int i;
    if (total == 0)
    {
        printf("No accounts\n");
    }
    else
    {
        for (i = 0; i < total; i++)
        {
            printf("\nAcc No: %d", a[i].accNo);
            printf("\nName: %s", a[i].name);
            printf("\nBalance: %.2f\n", a[i].balance);
        }
    }
}

void deposit()
{
    int acc, i;
    float amt;

    printf("Enter Account Number: ");
    scanf("%d", &acc);

    for (i = 0; i < total; i++)
    {
        if (a[i].accNo == acc)
        {
            printf("Enter Amount: ");
            scanf("%f", &amt);
            a[i].balance += amt;
            printf("Deposited\n");
            return;
        }
    }

    printf("Account not found\n");
}

void withdraw()
{
    int acc, i;
    float amt;

    printf("Enter Account Number: ");
    scanf("%d", &acc);

    for (i = 0; i < total; i++)
    {
        if (a[i].accNo == acc)
        {
            printf("Enter Amount: ");
            scanf("%f", &amt);

            if (a[i].balance >= amt)
            {
                a[i].balance -= amt;
                printf("Withdrawn\n");
            }
            else
            {
                printf("Insufficient balance\n");
            }
            return;
        }
    }

    printf("Account not found\n");
}

void search()
{
    int acc, i, flag = 0;

    printf("Enter Account Number: ");
    scanf("%d", &acc);

    for (i = 0; i < total; i++)
    {
        if (a[i].accNo == acc)
        {
            printf("Account Found\n");
            printf("Name: %s\n", a[i].name);
            printf("Balance: %.2f\n", a[i].balance);
            flag = 1;
        }
    }

    if (flag == 0)
    {
        printf("Account not found\n");
    }
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n1 Create Account\n2 Display\n3 Deposit\n4 Withdraw\n5 Search\n6 Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch == 1)
            create();
        else if (ch == 2)
            display();
        else if (ch == 3)
            deposit();
        else if (ch == 4)
            withdraw();
        else if (ch == 5)
            search();
        else if (ch == 6)
            break;
        else
            printf("Invalid choice\n");
    }

    return 0;
}