// Write a program for to check whether a given String is Palindrome or  not using recursion
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindromeRecursive(char *str, int start, int end) {
    if (start >= end)
        return 1;

    while (!isalnum(str[start]) && start < end)
        start++;
    while (!isalnum(str[end]) && start < end)
        end--;

    char ch1 = tolower(str[start]);
    char ch2 = tolower(str[end]);

    if (ch1 == ch2)
        return isPalindromeRecursive(str, start + 1, end - 1);
    else
        return 0; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    if (isPalindromeRecursive(str, 0, strlen(str) - 1))
        printf("The string \"%s\" is a palindrome.\n", str);
    else
        printf("The string \"%s\" is not a palindrome.\n", str);

    return 0;
}
