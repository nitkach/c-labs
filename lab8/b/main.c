#include <stdio.h>

#define ROWS 4
#define COLUMNS 4

void main() {
    int arr[ROWS][COLUMNS] = {{-4, 2, 0, 7}, {5, -8, 3, 11}, {9, -2, 15, -1}, {14, 12, 3, 22}};
    int a, b, acc = 0;

    printf("Введите 2 целых числа: ");
    scanf("%d%d", &a, &b);

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            if (*(*(arr + i) + j) % a == 0 || *(*(arr + i) + j) % b == 0) {
                acc += 1;
            }
        }
    }

    printf("Количество чисел, кратных %d или %d: %d.\n", a, b, acc);
}
