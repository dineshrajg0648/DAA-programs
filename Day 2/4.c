// Write a program to print minimum and maximum value sequency for all the numbers in a list.

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of elements should be positive.");
        return 1;
    }

    int i, num;
    printf("Enter the elements of the list:\n");
    scanf("%d", &num);

    int min = num; 
    int max = num;

    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num < min) {
            min = num; 
        }
        if (num > max) {
            max = num; 
        }
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
