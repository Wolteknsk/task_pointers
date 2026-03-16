#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int **ptrArray = (int**)malloc(5 * sizeof(int*));
    for (int i = 0; i < 5; i++) {
        ptrArray[i] = (int*)malloc(5 * sizeof(int));
    }

    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            ptrArray[i][j] = rand() % 20;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("Массив %d: ", i);
        for (int j = 0; j < 5; j++) {
            printf("%d ", ptrArray[i][j]);
        }
        printf("\n");
        free(ptrArray[i]);
    }
    free(ptrArray);
    return 0;
}