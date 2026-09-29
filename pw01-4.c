#include <stdio.h>

int main(void)
{
    int YEARS = 3;
    int DAYS_PER_YEAR = 365;
    int TOTAL_DAYS = YEARS*DAYS_PER_YEAR;
    printf("YEARS = %d\n", YEARS);
    printf("DAYS_PER_YEAR = %d\n", DAYS_PER_YEAR);
    printf("TOTAL_DAYS = %d\n", TOTAL_DAYS);
    return 0;
}