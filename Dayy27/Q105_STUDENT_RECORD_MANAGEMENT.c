#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    while (1) {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf("%s", s[n].name);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Student Added Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("\nNo Records Found!\n");
            } else {
                printf("\nStudent Records:\n");
                printf("-----------------------------------\n");
                for (i = 0; i < n; i++) {
                    printf("Roll No : %d\n", s[i].roll);
                    printf("Name    : %s\n", s[i].name);
                    printf("Marks   : %.2f\n", s[i].marks);
                    printf("-----------------------------------\n");
                }
            }
            break;

        case 3:
            printf("\nEnter Roll Number to Search: ");
            scanf("%d", &roll);

            found = 0;

            for (i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    printf("\nStudent Found:\n");
                    printf("Roll No : %d\n", s[i].roll);
                    printf("Name    : %s\n", s[i].name);
                    printf("Marks   : %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Student Not Found!\n");

            break;

        case 4:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}