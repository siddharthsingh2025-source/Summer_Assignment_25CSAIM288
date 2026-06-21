#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", sum / n);
    return 0;
}