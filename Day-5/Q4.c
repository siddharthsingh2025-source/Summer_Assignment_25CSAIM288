#include <stdio.h>

int main() {
    int num, originalNum, maxPrime = -1;

    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;

    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }
    if (num > 2) {
        maxPrime = num;
    }

    printf("The largest prime factor of %d is: %d\n", originalNum, maxPrime);

    return 0;
}