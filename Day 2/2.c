// Write a Program to perform binary search in c

#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x) {
            return binarySearch(arr, l, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main(void) {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    int index = binarySearch(arr, 0, size - 1, x);

    if (index == -1) {
        printf("Element is not present in array");
    } else {
        printf("Element is present at index %d", index);
    }

    return 0;
}
