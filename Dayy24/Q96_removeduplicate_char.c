#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {

            if (str[i] == str[j]) {
                int k = j;

                while (str[k] != '\0') {
                    str[k] = str[k + 1];
                    k++;
                }

                j--;   // check the new character at position j
            }
        }
    }

    printf("String after removing duplicates: %s", str);

    return 0;
}