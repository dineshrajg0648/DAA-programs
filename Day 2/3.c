// Write a program   to print the reverse of a string using recursion

#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    if (*str) {
        reverse(str + 1);
        printf("%c", *str);
    }
}

int main() {
    char a[100]; 
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin); 

    if (strlen(a) > 0 && a[strlen(a) - 1] == '\n') {
        a[strlen(a) - 1] = '\0';
    }

    reverse(a);
    return 0;
}

