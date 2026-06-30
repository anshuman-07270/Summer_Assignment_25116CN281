#include <stdio.h>

int main() {
    int id[50], status[50];
    char title[50][50]; 
    int n = 0, choice, searchId, found; 

    while (1) {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Thank You!\n");
            break;
        }

        switch (choice) {

        case 1:
            if (n == 50) {
                printf("Library is Full!\n");
                break;
            }

            printf("Enter Book ID: ");
            scanf("%d", &id[n]);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", title[n]);

            status[n] = 0;      // 0 = Available
            n++;

            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No Books Available.\n");
            } else {
                printf("\n----- Book List -----\n");
                for (int i = 0; i < n; i++) {
                    printf("Book ID : %d\n", id[i]);
                    printf("Title   : %s\n", title[i]);

                    if (status[i] == 0)
                        printf("Status  : Available\n");
                    else
                        printf("Status  : Issued\n");

                    printf("----------------------\n");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &searchId);

            found = 0;

            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    printf("\nBook Found\n");
                    printf("Book ID : %d\n", id[i]);
                    printf("Title   : %s\n", title[i]);

                    if (status[i] == 0)
                        printf("Status  : Available\n");
                    else
                        printf("Status  : Issued\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Book Not Found!\n");

            break;

        case 4:
            printf("Enter Book ID to Issue: ");
            scanf("%d", &searchId);

            found = 0;

            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    found = 1;

                    if (status[i] == 0) {
                        status[i] = 1;
                        printf("Book Issued Successfully!\n");
                    } else {
                        printf("Book Already Issued!\n");
                    }
                    break;
                }
            }

            if (found == 0)
                printf("Book Not Found!\n");

            break;

        case 5:
            printf("Enter Book ID to Return: ");
            scanf("%d", &searchId);

            found = 0;

            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    found = 1;

                    if (status[i] == 1) {
                        status[i] = 0;
                        printf("Book Returned Successfully!\n");
                    } else {
                        printf("Book is Already Available!\n");
                    }
                    break;
                }
            }

            if (found == 0)
                printf("Book Not Found!\n");

            break;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}