// Write a program to Create inventory management system.

#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int qty;
    float price;
};

struct Item inv[100];
int count = 0;

int main() {
    int choice, i, searchId;

    while (1) {
        printf("\n--- INVENTORY MENU ---\n");
        printf("1. Add Item\n2. Display Items\n3. Search Item\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            break;
        }

        if (choice == 1) {
            printf("Enter ID, Name, Quantity, Price: ");
            scanf("%d %s %d %f", &inv[count].id, inv[count].name,
                  &inv[count].qty, &inv[count].price);
            count++;
        }

        else if (choice == 2) {
            printf("\nID\tName\tQty\tPrice\n");
            for (i = 0; i < count; i++) {
                printf("%d\t%s\t%d\t%.2f\n",
                       inv[i].id, inv[i].name,
                       inv[i].qty, inv[i].price);
            }
        }

        else if (choice == 3) {
            printf("Enter ID to search: ");
            scanf("%d", &searchId);

            for (i = 0; i < count; i++) {
                if (inv[i].id == searchId) {
                    printf("Found: %d %s %d %.2f\n",
                           inv[i].id, inv[i].name,
                           inv[i].qty, inv[i].price);
                    break;
                }
            }

            if (i == count)
                printf("Item not found\n");
        }

        else {
            printf("Wrong choice\n");
        }
    }
    return 0;
}