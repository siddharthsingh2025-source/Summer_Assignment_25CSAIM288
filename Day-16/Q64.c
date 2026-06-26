#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 0;

    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < m; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            arr[m++] = arr[i];
        }
    }

    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}