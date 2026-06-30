#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[100];
    int i, length;
    int upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter Password: ");
    scanf("%s", password);

    length = strlen(password);

    for(i = 0; password[i] != '\0'; i++)
    {
        if(isupper(password[i]))
            upper = 1;
        else if(islower(password[i]))
            lower = 1;
        else if(isdigit(password[i]))
            digit = 1;
        else
            special = 1;
    }

    printf("\nPassword Analysis:\n");

    if(length >= 8)
        printf("Minimum Length: Yes\n");
    else
        printf("Minimum Length: No (At least 8 characters)\n");

    if(upper)
        printf("Contains Uppercase Letter\n");
    else
        printf("No Uppercase Letter\n");

    if(lower)
        printf("Contains Lowercase Letter\n");
    else
        printf("No Lowercase Letter\n");

    if(digit)
        printf("Contains Digit\n");
    else
        printf("No Digit\n");

    if(special)
        printf("Contains Special Character\n");
    else
        printf("No Special Character\n");

     if(length >= 8 && upper && lower && digit && special){

        printf("\nPassword Strength: STRONG\n");
      } 
     else if(length >= 6 && (upper || lower) && digit){

        printf("\nPassword Strength: MEDIUM\n");
     }
     else{

        printf("\nPassword Strength: WEAK\n");
     }
    return 0;
    
}