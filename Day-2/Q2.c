#include <stdio.h>

int main(void)
{
    int number;
    int reversed = 0;
    int remainder;

    if (scanf("%d", &number) != 1) {
        return 1;
    }

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    printf("%d", reversed);
    return 0;
}
