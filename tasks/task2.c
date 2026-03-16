#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*)malloc(10 * sizeof(int));
    if (arr == NULL) return 1;

    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }

    printf("Массив: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}