// Write a program to find the perfect number.

#include <stdio.h>

// Function to check whether a number is perfect or not
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPerfect(num)) {
        printf("%d is a PERFECT NUMBER\n", num);
    } else {
        printf("%d is NOT a perfect number\n", num);
    }

    return 0;
}
