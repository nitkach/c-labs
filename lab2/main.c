#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

void main()
{
    size_t bool_size = sizeof(bool);
    printf("Bool size is %lu bytes.\n", bool_size);

    size_t vertical_tab = sizeof('\v');
    printf("Size of '\\v' is %lu bytes.\n", vertical_tab);

    int char_max = CHAR_MAX;
    int char_min = CHAR_MIN;
    printf("CHAR_MIN = %d.\nCHAR_MAX = %d.\n", char_min, char_max);
}
