// write a program to find the Factorial of a number using recursion.

#include <stdio.h>
unsigned long long factorial(int num) {

    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int num;
    unsigned long long result;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative number is not possible.\n");
    } else {
        result = factorial(num);
        printf("The factorial of %d is %llu.\n", num, result);
    }

    return 0;
}
