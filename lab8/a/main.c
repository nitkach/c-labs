#include <stdio.h>

#define ARR_LEN 20

void main() {
    int A[ARR_LEN] = {-50, 100, 3, 8, 0, -7, 11, 28, 9, -18, 14, -20, -13, 34, 20, -14, 1, 12, -6, 19};

    int i = 0, m1, m2;

    printf("Введите два индекса массива, от 0 до 20 (не включая): ");
    scanf("%d%d", &m1, &m2);

    printf("[ ");
    while (i < ARR_LEN) {
        if (*(A + i) >= 0) {
            *(A + i) += *(A + m1);
        } else {
            *(A + i) += *(A + m2);
        };
        printf("%d ", *(A + i));
        i++;
    }
    printf("]\n");
}
