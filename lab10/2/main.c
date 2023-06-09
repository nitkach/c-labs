#include <stdio.h>
#include <math.h>

double calcute_area(double a, double b, double c) {
    double result, p = (a + b + c) / 2;

    result = sqrt(p * (p - a) * (p - b) * (p - c));

    return result;
}

void print_area(double area) {
    printf("Площадь треугольника: %.3lf.\n", area);
}

void main() {
    double a, b, c, area;
    int is_exist = 0;

    do {
        printf("Введите 3 стороны треугольника: ");
        scanf("%lf%lf%lf", &a, &b, &c);

        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            is_exist = 1;
        }
        else {
            printf("Треугольник не существует.\n");
        }
    } while (is_exist == 0);

    area = calcute_area(a, b, c);

    print_area(area);
}
