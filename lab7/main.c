/* main.c
  --------------------------
  создал : Ткачев Н.В.
  группа : БПМИ-ПТ
  дата   : 2023/06/08
  для    : gcc 11.3.0
  -------------------------------------------------------
  Вывод сообщения.
*/

#include <stdio.h>
#include <math.h>

void main() {
    double x, sum = 0, term = 1, i = 0;

    printf("Введите x: ");
    scanf("%lf", &x);

    while (fabs(term) > 0.001) {
        sum += term;
        i++;
        term *= x / i;
    }

    printf("Сумма: %-.3lf\n", sum);
}
