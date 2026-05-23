/* year that is a multiple of 4, except for years evenly divisible by 100 but not by 400 */
#include <stdio.h>

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

/* day of the year convets it into day of year as per name */
int day_of_year (int year, int month, int day){

    int i, leap;
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    /* leap will return 0 or 1
    according to that it'll set the row and then access the columns */
    for (i = 1; i<month; i++){
        day += daytab[leap][i];
    }
    return day;
}

void month_day (int year, int yearday, int *pmonth, int *pday){

    int i, leap;
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    for (i = 1; yearday > daytab[leap][i]; i++){
        yearday -= daytab[leap][i];
    }
    *pmonth = i;
    *pday = yearday;
}

int main(){

    int m = 2;
    int d = 29;

    // month_day(2400, 61, &m, &d);    
    printf("%d\n", day_of_year(2400, 2, 29));
    return 0;

}
