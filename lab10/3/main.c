#include <stdio.h>
#include <math.h>

#define COEFF 0.666

void iteration() {
    int k = 1;
    double sum = 0, term = COEFF * (1 / (powl(2, k - 1)));

    while (fabs(term) > 0.0001) {
        sum += term;
        k++;
        term = COEFF * (1 / (powl(2, k - 1)));
    }

    printf("Итерационный цикл - сумма: %-.10lf\n", sum);
}

double recursive(int num) {
    double term = (COEFF * (1 / (powl(2, num - 1))));
    if (term < 0.0001) {
        return term;
    }
    return term + recursive(num + 1);
}

int main() {
    iteration();
    printf("Рекурсивный вызов - сумма: %-.10lf\n", recursive(1));

    return 0;
}
