#include <stdio.h>
#include <math.h>

void main() {
    double x, y;

    printf("Введите x: ");
    scanf("%lf", &x);

    y = fabs(pow(x, 2) - pow(x, 3)) - ((sin(x))/(1-tan(x)));
    printf("Результат: %-8.3lf\n", y);
}
