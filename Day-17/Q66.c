#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    int n1 = 4, n2 = 4;
    int union_arr[8];
    int k = 0;

    for (int i = 0; i < n1; i++) {
        union_arr[k++] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        int exists = 0;
        for (int j = 0; j < k; j++) {
            if (arr2[i] == union_arr[j]) {
                exists = 1;
                break;
            }
        }
        if (!exists) {
            union_arr[k++] = arr2[i];
        }
    }

    for (int i = 0; i < k; i++) {
        printf("%d ", union_arr[i]);
    }
    printf("\n");
    return 0;
}