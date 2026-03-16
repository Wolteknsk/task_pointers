#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copyString(const char *src) {
    if (src == NULL) return NULL;
    char *dest = (char*)malloc((strlen(src) + 1) * sizeof(char));
    if (dest != NULL) {
        strcpy(dest, src);
    }
    return dest;
}

int main() {
    char original[] = "Hello, World!";
    char *copy = copyString(original);
    if (copy == NULL) {
        printf("Ошибка\n");
        return 1;
    }
    printf("Оригинал: %s\n", original);
    printf("Копия:    %s\n", copy);
    free(copy);
    return 0;
}