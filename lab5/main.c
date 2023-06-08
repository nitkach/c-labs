#include <stdio.h>

#define LEFT 0
#define RIGHT 25
#define DIVISIBLE 2

void main() {
    int a, b, c, d, sum = 0;

    printf("Введите 4 целых числа: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a % DIVISIBLE == 0 && (a >= LEFT && a <= RIGHT)) {
        sum += a;
    }
    if (b % DIVISIBLE == 0 && (b >= LEFT && b <= RIGHT)) {
        sum += b;
    }
    if (c % DIVISIBLE == 0 && (c >= LEFT && c <= RIGHT)) {
        sum += c;
    }
    if (d % DIVISIBLE == 0 && (d >= LEFT && d <= RIGHT)) {
        sum += d;
    }

    printf("\nПроверка делимости на %d в диапазоне [%d, %d].\n", DIVISIBLE, LEFT, RIGHT);
    printf("Сумма: %d.\n", sum);
}
