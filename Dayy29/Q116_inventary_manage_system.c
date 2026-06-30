#include <stdio.h>

int main() {

    int id[50], quantity[50];
    float price[50];
    char name[50][30];

    int n = 0, choice, searchId, found;

    while (1) {

        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Thank You!\n");
            break;
        }

        switch (choice) {

        case 1:

            if (n == 50) {
                printf("Inventory Full!\n");
                break;
            }

            printf("Enter Product ID: ");
            scanf("%d", &id[n]);

            printf("Enter Product Name: ");
            scanf(" %[^\n]", name[n]);

            printf("Enter Product Price: ");
            scanf("%f", &price[n]);

            printf("Enter Quantity: ");
            scanf("%d", &quantity[n]);

            n++;

            printf("Product Added Successfully!\n");
            break;

        case 2:

            if (n == 0) {
                printf("No Products Available.\n");
            } else {

                printf("\n---------- PRODUCT LIST ----------\n");

                for (int i = 0; i < n; i++) {

                    printf("Product ID : %d\n", id[i]);
                    printf("Name       : %s\n", name[i]);
                    printf("Price      : %.2f\n", price[i]);
                    printf("Quantity   : %d\n", quantity[i]);
                    printf("----------------------------------\n");
                }
            }

            break;

        case 3:

            printf("Enter Product ID to Search: ");
            scanf("%d", &searchId);

            found = 0;

            for (int i = 0; i < n; i++) {

                if (id[i] == searchId) {

                    printf("\nProduct Found\n");
                    printf("Product ID : %d\n", id[i]);
                    printf("Name       : %s\n", name[i]);
                    printf("Price      : %.2f\n", price[i]);
                    printf("Quantity   : %d\n", quantity[i]);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Product Not Found!\n");

            break;

        case 4:

            printf("Enter Product ID: ");
            scanf("%d", &searchId);

            found = 0;

            for (int i = 0; i < n; i++) {

                if (id[i] == searchId) {

                    printf("Current Quantity: %d\n", quantity[i]);

                    printf("Enter New Quantity: ");
                    scanf("%d", &quantity[i]);

                    printf("Quantity Updated Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Product Not Found!\n");

            break;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}