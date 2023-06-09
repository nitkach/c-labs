#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void main() {
    char e, w;

    printf("Введите первый символ: ");
    e = getchar();
    getchar();

    printf("\nВведите второй символ: ");
    w = getchar();
    getchar();

    char string[MAX_LEN], ans[MAX_LEN], sep[MAX_LEN] = " ";
    char* ptr_to_word;
    int flag = 0;

    printf("\nВведите строку, не превышающую %d символов: ", MAX_LEN);
    fgets(string, MAX_LEN, stdin);

    ptr_to_word = strtok(string, sep);

    while (ptr_to_word != NULL) {
        if ((strchr(ptr_to_word, e) != NULL) && (strchr(ptr_to_word, w) == NULL)) {
            printf("%s\n", ptr_to_word);
            flag = 1;
        }

        ptr_to_word = strtok(NULL, sep);
    }

    if (flag == 0) {
        printf("\nСтрока-слово не подходит под условия.\n");
    }
}
