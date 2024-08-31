#include <stdio.h>

int main(void){

    int sec, left_sec;
    int min, left_min;
    int hours, left_hours;
    int day, left_day;
    int years, left_years;

    const int SEC_PER_MIN = 60;
    const int MIN_PER_HOUR = 60;
    const int HOUR_PER_DAY = 24;
    const int DAY_PER_YEAR = 365;
        
    printf("Перевод секунды в годы, дни, часы и минуты\n");
    printf("Пожалуйста, введите количество секунд (<=0 для выхода):\n");
    scanf("%d", &sec);

    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;
        hours = min / MIN_PER_HOUR;
        day = (hours / HOUR_PER_DAY);
        years = (day / DAY_PER_YEAR);
        left_sec = sec % SEC_PER_MIN;
        left_min = min % MIN_PER_HOUR;
        left_hours = hours % HOUR_PER_DAY;
        left_day = day % DAY_PER_YEAR;    
      
        printf("%d секунд - это %d лет %d дней, %d часов, %d минут и %d секунды\n", sec, years ,left_day ,left_hours, left_hours, left_sec);
        printf("Введите следующее значение (<=0 для выхода):\n");
        scanf("%d", &sec);
    }
    
    return 0;

}