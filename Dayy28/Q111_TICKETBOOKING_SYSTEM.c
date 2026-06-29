#include <stdio.h>

struct Ticket {
    int ticketId;
    char name[50];
    char destination[50];
    int seats;
};

int main() {
    struct Ticket t[100];
    int n = 0;
    int choice, i, id, found;

    while (1) {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Booked Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Ticket ID: ");
            scanf("%d", &t[n].ticketId);

            printf("Enter Passenger Name: ");
            scanf(" %[^\n]", t[n].name);

            printf("Enter Destination: ");
            scanf(" %[^\n]", t[n].destination);

            printf("Enter Number of Seats: ");
            scanf("%d", &t[n].seats);

            n++;
            printf("Ticket Booked Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No tickets booked.\n");
            } else {
                printf("\n----- BOOKED TICKETS -----\n");
                for (i = 0; i < n; i++) {
                    printf("\nTicket %d\n", i + 1);
                    printf("Ticket ID   : %d\n", t[i].ticketId);
                    printf("Passenger   : %s\n", t[i].name);
                    printf("Destination : %s\n", t[i].destination);
                    printf("Seats       : %d\n", t[i].seats);
                }
            }
            break;

        case 3:
            printf("Enter Ticket ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (t[i].ticketId == id) {
                    printf("\nTicket Found\n");
                    printf("Ticket ID   : %d\n", t[i].ticketId);
                    printf("Passenger   : %s\n", t[i].name);
                    printf("Destination : %s\n", t[i].destination);
                    printf("Seats       : %d\n", t[i].seats);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Ticket not found.\n");
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