#include <stdio.h>

int main() {

    char str[100], rev[100];
    int choice;
    int i, length, count;

    while (1) {

        printf("\n===== STRING OPERATIONS =====\n");
        printf("1. Enter String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Reverse String\n");
        printf("5. Count Vowels\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Thank You!\n");
            break;
        }

        switch (choice) {

        case 1:

            printf("Enter a String: ");
            scanf(" %[^\n]", str);
            break;

        case 2:

            printf("String = %s\n", str);
            break;

        case 3:

            length = 0;

            while (str[length] != '\0')
                length++;

            printf("Length = %d\n", length);
            break;

        case 4:

            length = 0;

            while (str[length] != '\0')
                length++;

            for (i = 0; i < length; i++) {
                rev[i] = str[length - 1 - i];
            }

            rev[i] = '\0';

            printf("Reversed String = %s\n", rev);
            break;

        case 5:

            count = 0;

            for (i = 0; str[i] != '\0'; i++) {

                if (str[i] == 'A' || str[i] == 'E' ||
                    str[i] == 'I' || str[i] == 'O' ||
                    str[i] == 'U' || str[i] == 'a' ||
                    str[i] == 'e' || str[i] == 'i' ||
                    str[i] == 'o' || str[i] == 'u') {

                    count++;
                }
            }

            printf("Number of Vowels = %d\n", count);
            break;

        default:

            printf("Invalid Choice!\n");
        }
    }

    return 0;
}