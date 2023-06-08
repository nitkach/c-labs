/* main.c
  --------------------------
  создал : Ткачев Н.В.
  группа : БПМИ-ПТ
  дата   : 2023/06/6
  для    : gcc 11.3.0
  -------------------------------------------------------
  Функции ввода-вывода.
*/
#include <stdio.h>
#include <string.h>

#define MAX_STR 100

void main() {
    char my_char;
    char my_string[MAX_STR];

    int sign_pos, sign_neg;
    unsigned int usign_int;
    float f_pos, f_neg;

    printf("Введите символ: ");
    scanf("%c", &my_char);
    getchar();
    printf("Символ: %c, код: %d\n\n", my_char, my_char);

    printf("Введите строку: ");
    fgets(my_string, MAX_STR, stdin);
    printf("Длина: %lu, строка: %s\n", strlen(my_string), my_string);

    printf("Введите два целых десятичных числа (положительного и отрицательного): ");
    scanf("%d%d", &sign_pos, &sign_neg);
    printf("|%-8d|%-8d|\n", sign_pos, sign_neg);
    printf("|%d|%d|\n", sign_pos, sign_neg);
    printf("|%8d|%8d|\n", sign_pos, sign_neg);
    printf("|--------|--------|\n");
    printf("|%-8x|%-8x|\n", sign_pos, sign_neg);
    printf("|%x|%x|\n", sign_pos, sign_neg);
    printf("|%8x|%8x|\n\n", sign_pos, sign_neg);

    printf("Введите два числа с плавающей точкой (положительного и отрицательного): ");
    scanf("%f%f", &f_pos, &f_neg);
    printf("|%8.3f|%8.3f|\n", f_pos, f_neg);
    printf("|%8.3e|%8.3e|\n\n", f_pos, f_neg);

    printf("Введите положительное число: ");
    scanf("%u", &usign_int);
    printf("| %u | %o | %x |\n", usign_int, usign_int, usign_int);
}
