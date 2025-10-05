#include <stdio.h>

void doubleArray(int *arr, int size) {
    int i;
    for(i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int size = 5;
    int i;

    printf("Before: ");
    for(i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    doubleArray(a, size);

    printf("After: ");
    for(i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
