// Write a program to check the given no is Armstrong or not using recursive function.

#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int isArmstrong(int number, int originalNumber, int digitCount) {
    if (number == 0)
        return 0;
    else
        return power(number % 10, digitCount) + isArmstrong(number / 10, originalNumber, digitCount);
}

int main() {
    int number, digitCount, result = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    digitCount = 0;
    int temp = number;
    while (temp != 0) {
        digitCount++;
        temp /= 10;
    }

    result = isArmstrong(number, number, digitCount);

    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}

