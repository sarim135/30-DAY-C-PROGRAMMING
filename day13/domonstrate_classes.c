#include <stdio.h>

// Function declaration
extern void extern_function();

int main() {
    auto int auto_variable = 10;
    register int register_variable = 20;
    static int static_variable = 30;

    printf("Auto variable: %d\n", auto_variable);
    printf("Register variable: %d\n", register_variable);
    printf("Static variable: %d\n", static_variable);

    // Call an external function to demonstrate extern storage class
    extern_function();

    return 0;
}

// Definition of an external function
void extern_function() {
    printf("This is an external function.\n");
}
