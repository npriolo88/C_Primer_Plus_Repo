#include <stdio.h>

int const MINUTES_PER_HOUR = 60;

int main(){

int minutes, minutes_left;
int hours;

printf("Пожалуйста, введите время в минутах: ");
scanf("%d", &minutes);

while (minutes > 0)
{
    hours = minutes / MINUTES_PER_HOUR;
    minutes_left = minutes % MINUTES_PER_HOUR;

    printf("%d минут(а) - это %d часов(а) и %d минут(ы)\n", minutes, hours, minutes_left);
    printf("Чтобы продолжить введите время в минутах(<= 0 - чтобы выйти)\n");
    scanf("%d", &minutes);    
}

printf("Готово!\n");
return 0;

}