#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char input[100];

    // Seeding the random number generator with the current time.
    srand(time(NULL));
    
    // Generate a random number between 0 and 1.
    int randomValue = rand() % 2;

    // Define the three strings of Rock, Paper, and Scissors.
    char *rock = "Rock";
    char *paper = "Paper";
    char *scissors = "Scissors";


    while(1) {

        printf("Enter 'Rock', 'Paper', or 'Scissors' to play or 'q' to quit.\n");
        // Read input from the user.
        fgets(input, sizeof(input), stdin);
        if(strcasecmp(input, "q\n") == 0) {
            printf("You entered in: %s\n", input);
            printf("Exiting the program, Goodbye.\n");
            break; // Exit the loop and ultimately the program.
        }
        else if(strcasecmp(input, "Rock\n") == 0){
            printf("You picked: %s\n", input);
            // Use the random number to pick one of the strings with a 50/50 chance
            char* result = (randomValue == 0) ? paper : scissors;
            printf("Rock VS. %s\n", result);
            if (strcmp(result, paper) == 0) {
                printf("Paper wins!\n");
            } else {
                printf("Rock wins!\n");
            }
        }
        else if(strcasecmp(input, "Paper\n") == 0){
            printf("You picked: %s\n", input);
            // Use the random number to pick one of the strings with a 50/50 chance
            char* result = (randomValue == 0) ? rock : scissors;
            printf("Paper VS. %s\n", result);
            if (strcmp(result, rock) == 0) {
                printf("Paper wins!\n");
            } else {
                printf("Scissors wins!\n");
            }
        }
        else if(strcasecmp(input, "Scissors\n") == 0){
            printf("You picked: %s\n", input);
            // Use the random number to pick one of the strings with a 50/50 chance
            char* result = (randomValue == 0) ? paper : rock;
            printf("Scissors VS. %s\n", result);
            if (strcmp(result, rock) == 0) {
                printf("Rock wins!\n");
            } else {
                printf("Scissors wins!\n");
            }
        }
    }
    return 0;
}