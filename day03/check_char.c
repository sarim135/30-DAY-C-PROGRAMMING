// Writing a C program that takes a character as input and checks whether it's a vowel or consonant.
#include <stdio.h>

int main() {
    char ch;

    // Ask the user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a consonant.\n", ch);
    } else {
        printf("%c is not a letter.\n", ch);
    }

    return 0;
}
