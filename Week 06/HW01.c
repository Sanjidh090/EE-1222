#include <stdio.h>

// Recursive function to calculate Fibonacci number
int main() {
    int n, i;

    // Prompt user for the number of terms
    printf("Number of Terms: ");
    scanf("%d", &n);

    // Print the Fibonacci series
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}
int fib(int n) {
    if (n <= 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}
