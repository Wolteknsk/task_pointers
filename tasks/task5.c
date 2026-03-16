#include <stdio.h>
#include <stdlib.h>

int main() {
    int *src = (int*)malloc(10 * sizeof(int));
    int *dst = (int*)malloc(10 * sizeof(int));
    if (src == NULL || dst == NULL) return 1;

    for (int i = 0; i < 10; i++) src[i] = i;

    for (int i = 0; i < 10; i++) dst[i] = src[i];

    printf("Исходный: ");
    for (int i = 0; i < 10; i++) printf("%d ", src[i]);
    printf("\nКопия:    ");
    for (int i = 0; i < 10; i++) printf("%d ", dst[i]);
    printf("\n");

    free(src);
    free(dst);
    return 0;
}