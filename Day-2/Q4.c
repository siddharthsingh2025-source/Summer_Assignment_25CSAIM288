#include <stdio.h>

int main(void)
{
    int n, original, reversed = 0, remainder;
printf("Enter an integer: ");
    scanf("%d", &n);    

    original = n;

    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
