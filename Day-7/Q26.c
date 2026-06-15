#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0; // Base case 1
    if (n == 1) return 1; // Base case 2
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int terms = 6;
    printf("Fibonacci number at position %d is: %d\n", terms, fibonacci(terms));
    return 0;
}