#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int result[6];

    for (int i = 0; i < n1; i++) {
        result[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        result[n1 + i] = arr2[i];
    }

    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}