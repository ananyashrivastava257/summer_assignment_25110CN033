// Write a program to Create menu-driven array operations system.

#include <stdio.h>

int main() {
    int arr[100], n = 0, i, choice, value, pos;
    while (1) {
        printf("\n--- ARRAY MENU ---\n");
        printf("1. Insert\n2. Display\n3. Search\n4. Delete\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            arr[n] = value;
            n++;
        }

        else if (choice == 2) {
            printf("Array: ");
            for (i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
        }

        else if (choice == 3) {
            printf("Enter value to search: ");
            scanf("%d", &value);
            for (i = 0; i < n; i++) {
                if (arr[i] == value) {
                    printf("Found at position %d\n", i);
                    break;
                }
            }
            if (i == n)
                printf("Not found\n");
        }

        else if (choice == 4) {
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            if (pos >= 0 && pos < n) {
                for (i = pos; i < n - 1; i++)
                    arr[i] = arr[i + 1];
                n--;
                printf("Deleted\n");
            } else {
                printf("Invalid position\n");
            }
        }

        else {
            printf("Wrong choice\n");
        }
    }
    return 0;
}