// Creating a C program that defines constants for the number of days in a week and uses it to display each day's name.
#include <stdio.h>

#define DAYS_IN_WEEK 7

int main() {
    // Array to store day names
    char* day_names[DAYS_IN_WEEK];

    // Assign day names individually
    day_names[0] = "Sunday";
    day_names[1] = "Monday";
    day_names[2] = "Tuesday";
    day_names[3] = "Wednesday";
    day_names[4] = "Thursday";
    day_names[5] = "Friday";
    day_names[6] = "Saturday";

    // Display each day's name
    printf("Days of the week:\n");
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        printf("%d. %s\n", i + 1, day_names[i]);
    }

    return 0;
}
