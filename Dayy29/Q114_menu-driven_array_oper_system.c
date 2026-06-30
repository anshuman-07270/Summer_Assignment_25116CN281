#include <stdio.h>

int main() {

    int arr[100];
    int n = 0, choice, i;
    int key, found;
    int max, min, sum;

    while (1) {

        printf("\n===== ARRAY OPERATIONS =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Find Maximum\n");
        printf("5. Find Minimum\n");
        printf("6. Sum of Elements\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Thank You!\n");
            break;
        }

        switch (choice) {

        case 1:

            printf("Enter number of elements: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);

            for (i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
            }

            break;

        case 2:

            if (n == 0) {
                printf("Array is Empty!\n");
            } else {
                printf("Array Elements: ");

                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }

            break;

        case 3:

            if (n == 0) {
                printf("Array is Empty!\n");
                break;
            }

            printf("Enter element to search: ");
            scanf("%d", &key);

            found = 0;

            for (i = 0; i < n; i++) {
                if (arr[i] == key) {
                    printf("Element found at index %d\n", i);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Element not found!\n");

            break;

        case 4:

            if (n == 0) {
                printf("Array is Empty!\n");
                break;
            }

            max = arr[0];

            for (i = 1; i < n; i++) {
                if (arr[i] > max)
                    max = arr[i];
            }

            printf("Maximum Element = %d\n", max);

            break;

        case 5:

            if (n == 0) {
                printf("Array is Empty!\n");
                break;
            }

            min = arr[0];

            for (i = 1; i < n; i++) {
                if (arr[i] < min)
                    min = arr[i];
            }

            printf("Minimum Element = %d\n", min);

            break;

        case 6:

            if (n == 0) {
                printf("Array is Empty!\n");
                break;
            }

            sum = 0;

            for (i = 0; i < n; i++) {
                sum += arr[i];
            }

            printf("Sum of Elements = %d\n", sum);

            break;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}