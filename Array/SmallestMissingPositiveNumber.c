#include <stdio.h>
#include <limits.h>
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}
int findSmallestMissingPositive(int arr[], int n) {
    int expected = 1; // Start from the smallest positive integer
    for (int i = 0; i < n; i++) {
        if (arr[i] == expected) {
            expected++; // Move to next expected number
        }
    }
    return expected; // The first missing positive number
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, n);
    int missingNumber = findSmallestMissingPositive(arr, n);
    printf("%d\n", missingNumber);
    return 0;
}