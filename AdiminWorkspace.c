#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "admin_members.h" 
#include "admin_events.h" 
#include "admin_utils.h"  
#include "AdiminWorkspace.h"
void adminworkspace(const char *clubName) {
    int choice;

    do {
        system("cls || clear");
        
        
        printf("========================================\n");
        printf("      Admin Menu for: %s\n", clubName);
        printf("========================================\n");
        showMenu();     
        
        printf("Enter your choice (0-6): ");
        
        if (scanf("%d", &choice) != 1) {
            choice = -1;
        }
        clearInputBuffer();
        
        switch (choice) {
            case 1:
                addMember(clubName);
                break;
            case 2:
                viewAllMembers(clubName);
                break;
            case 3:
                removeMember(clubName);
                break;
            case 4:
                createEvent(clubName);
                break;
            case 5:
                viewAllEvents(clubName);
                break;
            case 6:
                cancelEvent(clubName);
                break;
            case 0:
                printf("Returning to main menu...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        if (choice != 0) {
            printf("\nPress Enter to return to the menu...");
            getchar(); 
        }
    } while (choice != 0);
}
