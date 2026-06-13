#include <stdio.h>

int main() {
    int low, high, i, temp, remainder, sum;

    printf("Enter lower limit and upper limit: ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d are: \n", low, high);

    for (i = low; i <= high; i++) {
        temp = i;
        sum = 0;

        while (temp != 0) {
            remainder = temp % 10;
            sum += remainder * remainder * remainder;
            temp /= 10;
        }
 if (i == sum) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}