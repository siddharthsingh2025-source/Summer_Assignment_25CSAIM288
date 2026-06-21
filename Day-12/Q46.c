#include <stdio.h>

int isArmstrong(int n) {
    int original = n, sum = 0, remainder;
    while (n > 0) {
        remainder = n % 10;
        sum += remainder * remainder * remainder;
        n /= 10;
    }
    return original == sum;
}

int main() {
    int num;
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}