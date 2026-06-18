#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if(sum == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
//abc = a³ + b³ + c³