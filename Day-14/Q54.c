#include <stdio.h>

int main() {
    int arr[] = {2, 3, 2, 5, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    printf("Frequency of %d is %d\n", key, count);
    return 0;
}