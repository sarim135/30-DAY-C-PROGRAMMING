// - Writing a C program that calculates and prints the factorial of a number entered by the user.
#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case: n factorial equals n times (n-1) factorial
    }
}

int main() {
    int num;

    // Input number from the user
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and print the factorial of the entered number
        int result = factorial(num);
        printf("The factorial of %d is: %d\n", num, result);
    }

    return 0;
}
