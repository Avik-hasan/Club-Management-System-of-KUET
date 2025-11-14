#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main() {
    int option;
    
    // We put the menu in a loop so it shows again after
    // admin or user mode exits.
    do {
        system("cls || clear");
        printf("=============================================\n");
        printf("       >> KUET Club Management Portal <<\n");
        printf("=============================================\n");
        printf("Access your club activities, events, and members\n");
        printf("through an easy-to-use management system.\n\n");
        printf("Empowering KUET clubs through smart management and collaboration.\n\n");
        printf("1. Admin Login\n");
        printf("2. User Mode\n");
        printf("3. Exit\n");
        printf("---------------------------------------------\n");
        printf("Select Mode: ");
        
        if (scanf("%d", &option) != 1) {
            option = -1; // Handle invalid input
        }
        getchar(); // Clear the newline

        switch (option)
        {
            case 1:
                adminmode();
                break; // This break was already here and is fine
            
            case 2:
                usermode();
                break; // *** THIS IS THE CRITICAL FIX ***
            
            case 3:
                printf("Thanks for using the portal. Goodbye!\n");
                break;
            
            default:
                printf("Invalid option. Please try again.\n");
                printf("Press Enter to continue...");
                getchar();
                break;
        }

    } while (option != 3); // Loop until user chooses to Exit

    return 0;
}