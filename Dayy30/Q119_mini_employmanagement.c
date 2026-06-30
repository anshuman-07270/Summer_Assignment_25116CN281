#include <stdio.h>

int main()
{
    int id[50], age[50], salary[50];
    char name[50][30];
    int n = 0;
    int choice, searchId, i, found;

    while (1)
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &id[n]);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", name[n]);

            printf("Enter Age: ");
            scanf("%d", &age[n]);

            printf("Enter Salary: ");
            scanf("%d", &salary[n]);

            n++;
            printf("Employee Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo Employee Records.\n");
            }
            else
            {
                printf("\nEmployee Records:\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID     : %d\n", id[i]);
                    printf("Name   : %s\n", name[i]);
                    printf("Age    : %d\n", age[i]);
                    printf("Salary : %d\n", salary[i]);
                }
            }
            break;

        case 3:
            if (n == 0)
            {
                printf("\nNo Employee Records.\n");
                break;
            }

            printf("Enter Employee ID to Search: ");
            scanf("%d", &searchId);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (id[i] == searchId)
                {
                    printf("\nEmployee Found!\n");
                    printf("ID     : %d\n", id[i]);
                    printf("Name   : %s\n", name[i]);
                    printf("Age    : %d\n", age[i]);
                    printf("Salary : %d\n", salary[i]);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Employee Not Found!\n");

            break;

        case 4:
            if (n == 0)
            {
                printf("\nNo Employee Records.\n");
                break;
            }

            printf("Enter Employee ID to Delete: ");
            scanf("%d", &searchId);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (id[i] == searchId)
                {
                    found = 1;

                    for (int j = i; j < n - 1; j++)
                    {
                        id[j] = id[j + 1];
                        age[j] = age[j + 1];
                        salary[j] = salary[j + 1];

                        int k = 0;
                        while (name[j + 1][k] != '\0')
                        {
                            name[j][k] = name[j + 1][k];
                            k++;
                        }
                        name[j][k] = '\0';
                    }

                    n--;
                    printf("Employee Deleted Successfully!\n");
                    break;
                }
            }

            if (found == 0)
                printf("Employee Not Found!\n");

            break;

        case 5:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}