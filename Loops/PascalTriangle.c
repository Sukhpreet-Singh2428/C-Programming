#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        // Print leading spaces for alignment
        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        int val = 1; // First value in every row is always 1
        for(int j = 0; j <= i; j++) {
            printf("%d ", val);
            // Compute next value using formula:
            // C(n, k+1) = C(n, k) * (n-k)/(k+1)
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}