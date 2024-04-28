#include <stdio.h>
#include <math.h>

int main() {
    long long binaryNumber, decimalNumber = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    long long temp = binaryNumber;

    while (temp != 0) {
        remainder = temp % 10;
        decimalNumber = decimalNumber + remainder * base;
        base = base * 2;
        temp = temp / 10;
    }

    printf("Binary Number: %lld\n", binaryNumber);
    printf("Decimal Number: %lld\n", decimalNumber);

    return 0;
}
