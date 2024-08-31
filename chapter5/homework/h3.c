#include <stdio.h>

const int DAYS_PER_WEEK = 7;
int days;

int main(){

    printf("Введите количество дней: ");
    scanf("%d", &days);

    while (days > 0)
    {
        int week = days / DAYS_PER_WEEK;
        int left_days = days % DAYS_PER_WEEK;

        printf("%d дней составляют %d недель и %d дня\n", days, week, left_days);
        printf("Введите количество дней чтобы продолжить или 0, чтобы выйти: ");
        scanf("%d", &days);

    }

    printf("Готово!");
    

    return 0;
}