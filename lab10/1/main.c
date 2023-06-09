#include <stdio.h>

#define M_PI 3.14159265

double calculate_volume(double r, double h) {
    return (M_PI * r * r * h);
}

void print_volume(double vol) {
    printf("%.3lf\n", vol);
}

void main() {
    double r, h, volume;

    do {
        printf("Введите радиус цилиндра (r > 0): ");
        scanf("%lf", &r);
    } while (r <= 0);

    do {
        printf("Введите высоту цилиндра (h > 0): ");
        scanf("%lf", &h);
    } while (h <= 0);

    volume = calculate_volume(r, h);

    print_volume(volume);
}
