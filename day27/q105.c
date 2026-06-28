// Write a program to Create student record management system.

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, roll, found, j;

    do {
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            if(n >= 100) {
                printf("Record Full!\n");
                break;
            }

            printf("Enter Roll: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf(" %[^\n]", s[n].name);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Student Added!\n");
            break;

        case 2:
            if(n == 0) {
                printf("No Records Found!\n");
                break;
            }

            for(i = 0; i < n; i++) {
                printf("\nRoll: %d", s[i].roll);
                printf("\nName: %s", s[i].name);
                printf("\nMarks: %.2f\n", s[i].marks);
            }
            break;

        case 3:
            printf("Enter Roll to search: ");
            scanf("%d", &roll);

            found = 0;
            for(i = 0; i < n; i++) {
                if(s[i].roll == roll) {
                    printf("\nFound!\n");
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Not Found\n");
            break;

        case 4:
            printf("Enter Roll to update: ");
            scanf("%d", &roll);

            found = 0;
            for(i = 0; i < n; i++) {
                if(s[i].roll == roll) {
                    printf("Enter New Name: ");
                    scanf(" %[^\n]", s[i].name);

                    printf("Enter New Marks: ");
                    scanf("%f", &s[i].marks);

                    printf("Record Updated!\n");
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Not Found\n");
            break;

        case 5:
            printf("Enter Roll to delete: ");
            scanf("%d", &roll);

            found = 0;
            for(i = 0; i < n; i++) {
                if(s[i].roll == roll) {
                    for(j = i; j < n - 1; j++) {
                        s[j] = s[j + 1];
                    }
                    n--;
                    printf("Record Deleted!\n");
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Not Found\n");
            break;

        case 6:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while(choice != 6);

    return 0;
}
