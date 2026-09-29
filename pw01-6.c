#include <stdio.h>

int main(void)
{
    int const Y = 18;
    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d", Y*365*24*3600, Y*365*24, Y*365, Y);
    return 0;
}