#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "user.h"
#include "user_public.h" // For showClubMenu()
#include "admin_utils.h" // For clearInputBuffer()

// *** THIS IS THE CORRECTED ARRAY ***
// These names now EXACTLY match your Admin_info.txt file 
char *clubs[] = {
    "SGIPC", "DREAM", "HACK", "DHRUPODI", "KCC", "SPECTRUM",
    "KBEC", "ABOHO", "KRADIO", "KDC", "TRY", "KMC",
    "KPS", "KFS", "KSC", "KRC"
};
// This calculation correctly finds the number of clubs (16)
int num_of_clubs = sizeof(clubs) / sizeof(clubs[0]);

void usermode()
{
    int choice;
    do {
        system("cls || clear");
        printf("   >> Welcome to KUET User Page <<\n");
        printf("Explore the clubs and choose one to view details.\n\n");
        
        // This loop prints all the club names as menu options
        for(int i = 0; i < num_of_clubs; i++){
            printf("%d. %s\n", i + 1, clubs[i]);
        }
        printf("0. Return to Home Menu\n");
        printf("---------------------------------------------\n");
        printf("Enter your choice (0-%d): ", num_of_clubs);
        
        // This part correctly reads the choice
        if (scanf("%d", &choice) != 1) {
            choice = -1; 
        }
        clearInputBuffer();

        // This part correctly handles the choice
        if (choice > 0 && choice <= num_of_clubs) {
            // It now passes the correct name (e.g., "KMC")
            showClubMenu(clubs[choice - 1]); 
        } else if (choice == 0) {
            printf("Returning to Home Menu...\n");
        } else {
            printf("Invalid choice. Please try again.\n");
            printf("Press Enter to continue...");
            getchar();
        }

    } while (choice != 0);
}