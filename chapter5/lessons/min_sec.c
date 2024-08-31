#include <stdio.h>
#define SEC_PER_MIN 60
int main(void){

    int sec = 0;
    int min = 0;
    int left = 0;
    printf("Перевод секунды в минуты\n");
    printf("Пожалуйста, введите количество секунд (<=0 для выхода):\n");
    scanf("%d", &sec);

    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d секунд - это %d минут(ы) и %d секунд(ы).\n", sec, min, left);
        printf("Введите следующее значение (<=0 для выхода):\n");
        scanf("%d", &sec);
    }
    
    return 0;

}