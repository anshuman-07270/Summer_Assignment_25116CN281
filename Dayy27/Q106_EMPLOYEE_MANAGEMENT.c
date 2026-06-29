#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n = 0;
    int choice, i, searchId, found;

    while (1) {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[n].name);

            printf("Enter Employee Salary: ");
            scanf("%f", &emp[n].salary);

            n++;
            printf("Employee Added Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No employee records found.\n");
            } else {
                printf("\nEmployee Records:\n");
                for (i = 0; i < n; i++) {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID     : %d\n", emp[i].id);
                    printf("Name   : %s\n", emp[i].name);
                    printf("Salary : %.2f\n", emp[i].salary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to search: ");
            scanf("%d", &searchId);

            found = 0;
            for (i = 0; i < n; i++) {
                if (emp[i].id == searchId) {
                    printf("\nEmployee Found\n");
                    printf("ID     : %d\n", emp[i].id);
                    printf("Name   : %s\n", emp[i].name);
                    printf("Salary : %.2f\n", emp[i].salary);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee not found.\n");
            break;

        case 4:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}