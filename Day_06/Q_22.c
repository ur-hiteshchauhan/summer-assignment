#include <stdio.h>

int main() {
    int binary, digit, base = 1;
    int decimal = 0;

    printf("Enter binary number: ");
    scanf("%d", &binary);

    while(binary > 0) {
        digit = binary % 10;
        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }

    printf("Decimal = %d", decimal);

    return 0;
}
//Decimal = digit × 2^position