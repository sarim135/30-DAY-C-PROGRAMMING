// Writing a C program using if-else statements to guide a user through a simple decision-making process.
#include <stdio.h>

int main() {
    char choice;

    printf("Do you want to go for a walk? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        printf("Great! Going for a walk is a good idea.\n");
    } else if (choice == 'n' || choice == 'N') {
        printf("That's okay. Maybe another time.\n");
    } else {
        printf("Invalid choice. Please enter 'y' for yes or 'n' for no.\n");
    }

    return 0;
}
