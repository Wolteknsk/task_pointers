#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* createArray(int size) {
    int *arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) return NULL;

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

int main() {
    srand(time(NULL));
    int *arr = createArray(10);
    if (arr == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    printf("Массив: ");
    for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}