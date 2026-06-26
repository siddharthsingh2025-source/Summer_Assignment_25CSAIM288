#include <stdio.h>

int main() {
    int arr[] = {12, 34, 10, 6, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }
    return 0;
}