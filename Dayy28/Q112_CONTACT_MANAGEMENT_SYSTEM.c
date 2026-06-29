#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact c[100];
    int n = 0;
    int choice, i, found;
    char search[50];

    while (1) {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Name: ");
            scanf(" %[^\n]", c[n].name);

            printf("Enter Phone Number: ");
            scanf("%s", c[n].phone);

            printf("Enter Email: ");
            scanf("%s", c[n].email);

            n++;
            printf("Contact Added Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No contacts available.\n");
            } else {
                printf("\n----- CONTACT LIST -----\n");
                for (i = 0; i < n; i++) {
                    printf("\nContact %d\n", i + 1);
                    printf("Name  : %s\n", c[i].name);
                    printf("Phone : %s\n", c[i].phone);
                    printf("Email : %s\n", c[i].email);
                }
            }
            break;

        case 3:
            printf("Enter Name to Search: ");
            scanf(" %[^\n]", search);

            found = 0;
            for (i = 0; i < n; i++) {
                if (strcmp(c[i].name, search) == 0) {
                    printf("\nContact Found\n");
                    printf("Name  : %s\n", c[i].name);
                    printf("Phone : %s\n", c[i].phone);
                    printf("Email : %s\n", c[i].email);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Contact not found.\n");
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