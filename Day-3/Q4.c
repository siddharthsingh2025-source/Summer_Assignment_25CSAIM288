#include <stdio.h>

int main() {
    int low, high;

    printf("Enter range (start and end): ");
    scanf("%d %d", &low, &high);

    for (int i = low; i <= high; i++) {
        int count = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}