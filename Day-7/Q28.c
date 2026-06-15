#include <stdio.h>

int reverseNumber(int n, int reversed) {
    if (n == 0) {
        return reversed; 
    }
    return reverseNumber(n / 10, reversed * 10 + (n % 10)); 
}

int main() {
    int num = 12345;
    printf("Reverse of %d is: %d\n", num, reverseNumber(num, 0));
    return 0;
}