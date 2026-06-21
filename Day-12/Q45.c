#include <stdio.h>

int isPalindrome(int n) {
    int original = n, reversed = 0, remainder;
    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}