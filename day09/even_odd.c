#include <stdio.h>

// Function to check if a number is even
int isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Calling the isEven function
    if (isEven(number)) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
    
    return 0;
}
