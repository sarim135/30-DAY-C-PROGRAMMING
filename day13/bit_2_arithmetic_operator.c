#include <stdio.h>

int main() {
    int a = 5; // Binary: 0101
    int b = 3; // Binary: 0011

    // Bitwise AND
    int result_and = a & b; // 0101 & 0011 = 0001 (1 in decimal)
    printf("Bitwise AND: %d\n", result_and);

    // Bitwise OR
    int result_or = a | b; // 0101 | 0011 = 0111 (7 in decimal)
    printf("Bitwise OR: %d\n", result_or);

    // Bitwise XOR
    int result_xor = a ^ b; // 0101 ^ 0011 = 0110 (6 in decimal)
    printf("Bitwise XOR: %d\n", result_xor);

    // Bitwise NOT
    int result_not_a = ~a; // ~0101 = 1010 (in two's complement, -6 in decimal)
    printf("Bitwise NOT of a: %d\n", result_not_a);

    // Bitwise left shift
    int result_left_shift = a << 1; // 0101 << 1 = 1010 (10 in decimal)
    printf("Bitwise left shift of a: %d\n", result_left_shift);

    // Bitwise right shift
    int result_right_shift = b >> 1; // 0011 >> 1 = 0001 (1 in decimal)
    printf("Bitwise right shift of b: %d\n", result_right_shift);

    return 0;
}
