// Writing a C program to count the number of vowels in a given string
#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include this header file for the tolower function

int count_vowels(char str[]) {
    int count = 0;
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        char ch = tolower(str[i]); // Convert character to lowercase
        
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int vowels = count_vowels(str);
    printf("Number of vowels in the string: %d\n", vowels);
    
    return 0;
}

