#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total_elements = n + 1;
    int expected_sum = (total_elements * (total_elements + 1)) / 2;
    int actual_sum = 0;

    for (int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }

    printf("Missing number: %d\n", expected_sum - actual_sum);
    return 0;
}