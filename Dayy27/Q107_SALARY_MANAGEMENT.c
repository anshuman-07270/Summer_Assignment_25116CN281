#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, net;
};

int main() {
    struct Employee emp[100];
    int n = 0;
    int choice, i;

    while (1) {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Salary Details\n");
        printf("3. Calculate Net Salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &emp[n].basic);

            printf("Enter HRA: ");
            scanf("%f", &emp[n].hra);

            printf("Enter DA: ");
            scanf("%f", &emp[n].da);

            emp[n].net = 0;
            n++;
            printf("Employee Added Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No employee records found.\n");
            } else {
                printf("\nEmployee Salary Details:\n");
                for (i = 0; i < n; i++) {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID          : %d\n", emp[i].id);
                    printf("Name        : %s\n", emp[i].name);
                    printf("Basic       : %.2f\n", emp[i].basic);
                    printf("HRA         : %.2f\n", emp[i].hra);
                    printf("DA          : %.2f\n", emp[i].da);
                    printf("Net Salary  : %.2f\n", emp[i].net);
                }
            }
            break;

        case 3:
            if (n == 0) {
                printf("No employee records found.\n");
            } else {
                for (i = 0; i < n; i++) {
                    emp[i].net = emp[i].basic + emp[i].hra + emp[i].da;
                }
                printf("Net Salary Calculated Successfully!\n");
            }
            break;

        case 4:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}