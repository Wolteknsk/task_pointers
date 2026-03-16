#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char*)malloc(50 * sizeof(char));
    if (str == NULL) return 1;

    printf("Введите строку: ");
    fgets(str, 50, stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Вы ввели: %s\n", str);
    free(str);
    return 0;
}