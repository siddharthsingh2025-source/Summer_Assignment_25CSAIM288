#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, remainder, base = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        remainder = binary % 10;  
        decimal = decimal + (remainder * base);
        base = base * 2;         
        binary = binary / 10;      
    }

    printf("Decimal: %d\n", decimal);

    return 0;
}